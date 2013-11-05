#!/bin/bash
# Find n number of prime numbers, defined by user
# using program defined in prime.c


c=1
echo Please enter the number of prime numbers to print:
read limit

while [ $c -le $limit ]; do
  printf "$c "
  ./prime > primedata.txt
  cat primedata.txt
  (( c++ ))
done
