#!/bin/bash

[ $# -eq 3 ] || { echo "$0 prog type ts_no."; exit 1; }

if [ $2 == "s" ]; then
    make $1  && \
    ./$1 < ${1}_sample_ts${3}_input.txt
    rm $1  
elif [ $2 == "c" ]; then
    make $1  && \
    ./$1 < ${1}_customized_ts${3}_input.txt
    rm $1  
else
    make $1  && \
    ./$1 < ${1}_ts${3}_input.txt > ${1}_ts${3}_out.txt  && \
    diff ${1}_ts${3}_output.txt ${1}_ts${3}_out.txt     && \
    rm $1    && \
    rm ${1}_ts${3}_out.txt
fi
