#!/bin/bash

cd src # Important

ruby bf_but_better.rb ../$1 ../_out.bf $2
if [[ $? != 0 ]]; then exit; fi
ruby bf.rb ../_out.bf ../_out.c $2
if [[ $? != 0 ]]; then exit; fi
gcc ../_out.c -o ../a.out
