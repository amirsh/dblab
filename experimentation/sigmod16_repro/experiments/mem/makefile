CC=clang
OPTFLAG=-O3
#OPTFLAG=
PKG_CONFIG=$(shell locate pkg-config | head -n 1)
LIBS=`pkg-config --cflags glib-2.0 --libs glib-2.0`
#LIBS=`pkg-config --cflags glib-2.0 papi --libs glib-2.0 papi`
# For debugging
#CFLAGS=-g -Wno-parentheses-equality -Wparentheses
# For testing
CFLAGS=-w
FILES=$(wildcard *.c)
UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	DATE_CMD="date"
else
	#assume darwin
	DATE_CMD="gdate"
endif

default: checks compile

checks:
	@test -s $(PKG_CONFIG) || { echo "pkg-config does not exist! Please install it. Exiting..."; exit 1; }

compile:
	for file in $(FILES); 															   \
	do 																				   \
		output=`echo $$file | cut -d'.' -f1`".out"; 								   \
		start=`$(DATE_CMD) +'%H 3600 * %M 60 * + %S + 1000 * %N 1000000 / + p' | dc`;		   \
		$(CC) $(OPTFLAG) $(CFLAGS) $(LIBS) $$file -o $$output; \
		end=`$(DATE_CMD) +'%H 3600 * %M 60 * + %S + 1000 * %N 1000000 / + p' | dc`; 		   \
		echo "Compiling C code for query $$file using Clang took "`echo "$$end - $$start" | bc`" msec"; \
	done

llvm:
	for file in $(FILES); \
	do\
		output=`echo $$file | cut -d'.' -f1`".out"; 								   \
		$(CC) $(CFLAGS) $(LIBS) -O0 $$file -emit-llvm -c | opt -loop-unroll -o $$output; \
	done
	
clean:
	rm *.out *.output
