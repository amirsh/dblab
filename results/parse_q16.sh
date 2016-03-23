#!/bin/bash

while read line 
do
    FIRST=`echo $line | cut -d'|' -f1`
    SECOND=`echo $line | cut -d'|' -f2`
    echo $FIRST"|"$SECOND".00|"
done < Q21.result_sf0.1
