for f in `ls -1v *.out`
do
    QUERY=`echo $f | cut -d'.' -f1`
    echo "Running query $QUERY..."
    ./$f 1> $QUERY.txt
done
