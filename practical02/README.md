# Practical 2

This folder contains the code files for practical 2.

The file 'Conversion.c' converts a number into its binary representation. It then prints out the original number, the binary representation and the length of the binary representation. 

The file 'Sum.c' calculates the sum of 1/n from n = 1 to n = 1000 and then from n = 1000 to n = 1. It then prints the difference between the two calculated values. This shows how floating point addition is not associative.

## Compiling

To compile Conversion.c:
'gcc -o Conversion.c Conversion -lm'

To compile Sum.c:
'gcc -o Sum.c Sum -lm'

## Execute

Output of Conversion.c:

The number of digits is 25

inum = 33554431, fnum=33554432.000000, inum in binary=1111111111111111111111111

Output of Sum.c:

Sum1 = 7.485478

Sum2 = 7.485472

Difference between the two is 0.000007
