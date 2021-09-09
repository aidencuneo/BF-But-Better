#!/bin/bash

cd src # Important

ruby bf_but_better.rb ../$1 ../_out.bf
if [[ $? != 0 ]]; then exit; fi
ruby bf.rb ../_out.bf ../_out.c
if [[ $? != 0 ]]; then exit; fi
gcc ../_out.c -o ../a.out
