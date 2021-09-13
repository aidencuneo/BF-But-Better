#!/bin/bash

cd src # Important

ruby bf.rb ../$1 ../_out.c $2
if [[ $? != 0 ]]; then exit; fi
gcc ../_out.c -o ../a.out
