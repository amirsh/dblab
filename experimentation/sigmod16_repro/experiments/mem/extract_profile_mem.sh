RESULT_FILE="mem_profile.txt"
rm $RESULT_FILE
for f in `ls -1v *.txt`
do
	QUERY=`echo $f | cut -d'.' -f1`
	echo "Extracting query $QUERY..."
	eval "echo -n '$QUERY, ' >> $RESULT_FILE"
	eval "cat $f | grep total | sed 's/total //g' | cut -c 8- >> $RESULT_FILE"
        LINES=`cat $f | wc -l`
	if [ $LINES -eq 0  ]; then
		eval "echo 'NotFound' >> $RESULT_FILE"
	fi
done
