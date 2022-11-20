#!/bin/bash

[ $# -eq 3 ] || { echo "$0 prog type ts_no."; exit 1; }

FLAGS='-std=c++17'

if [ $2 == "s" ]; then
    make CPPFLAGS=${FLAGS} $1  && \
    ./$1 < ${1}_sample_ts${3}_input.txt
    rm -f $1  
elif [ $2 == "c" ]; then
    make CPPFLAGS=${FLAGS} $1  && \
    ./$1 < ${1}_customized_ts${3}_input.txt
    rm -f $1  
else
    make CPPFLAGS=${FLAGS} $1  && \
    ./$1 < ${1}_ts${3}_input.txt > ${1}_ts${3}_out.txt  && \
    diff ${1}_ts${3}_output.txt ${1}_ts${3}_out.txt     

    rm -f $1    
    rm -f ${1}_ts${3}_out.txt
fi
