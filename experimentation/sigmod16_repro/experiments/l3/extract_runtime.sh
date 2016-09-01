RESULT_FILE="runtime.txt"
rm $RESULT_FILE
for f in `ls -1v *.txt`
do
	QUERY=`echo $f | cut -d'.' -f1`
	echo "Extracting query $QUERY..."
	eval "echo -n '$QUERY, ' >> $RESULT_FILE"
	eval "cat $f | grep Generated | sed 's/Generated code run in //g' | sed 's/ milliseconds.//g' | tr '\n' ',' | rev | cut -c 2- | rev >> $RESULT_FILE"
        LINES=`cat $f | wc -l`
	if [ $LINES -eq 0  ]; then
		eval "echo 'NotFound' >> $RESULT_FILE"
	fi
done
