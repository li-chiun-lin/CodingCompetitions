#!/bin/bash

[ $# -eq 2 ] || { echo "$0 prog ts_no."; exit 1; }

make $1  && \
./$1 < ${1}_ts${2}_input.txt > ${1}_ts${2}_out  && \
diff ${1}_ts${2}_output.txt ${1}_ts${2}_out     && \
rm $1    && \
rm ${1}_ts${2}_out
