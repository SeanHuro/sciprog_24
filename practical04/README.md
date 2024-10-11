# Practical 4

This contains the code files for Practical 3.

The file 'traprule.c' can be used to find the integral of tan(x) from 0 to 60 degrees. This code stores 13 values of tan(x) in an array and then uses functions to find the value of the integral using the trapezoidal rule.

## Compiling 

To complile traprule.c:

'gcc -o traprule traprule.c -lm'

## Execution

Output of traprule.c:

Array[0] = Tan(0.000000) = 0.000000 

Array[1] = Tan(0.087266) = 0.087489 

Array[2] = Tan(0.174533) = 0.176327 

Array[3] = Tan(0.261799) = 0.267949 

Array[4] = Tan(0.349066) = 0.363970 

Array[5] = Tan(0.436332) = 0.466308 

Array[6] = Tan(0.523599) = 0.577350 

Array[7] = Tan(0.610865) = 0.700208 

Array[8] = Tan(0.698132) = 0.839100 

Array[9] = Tan(0.785398) = 1.000000 

Array[10] = Tan(0.872665) = 1.191754 

Array[11] = Tan(0.959931) = 1.428148 

Array[12] = Tan(1.047198) = 1.732051 

Integral of tan(x) from 0 to 60 degrees = 0.695047  
