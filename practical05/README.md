# Practical 4

This contains the code files for practical 5.

The file scanf.c is an example of how to use the 'scanf' function to get a user input in C.

The file fib.c creates a fibonacci series of length n+1 where the user inputs a desired n value.

The file hyperb.c calculates the hyperbolic tan function using the Maclaurin series method and the natural logarithms method.

## Compiling

To compile the code:

```bash
gcc scanf.c -o scanf

gcc fib.c -o fib

gcc hyperb.c -o hyperb -lm
```

## Execution

Output of scanf.c:

Nothing returned if input is correct. 'Problem with input' returned if user infut is not an int and a double.

Output of fib.c:

Return fibonacci series of length n. For example, user input of 5 returns 'The Fib Series is: 0, 1, 1, 2, 3, 5,'

If user input is less than 2, returns 'Input must be greater than 1'.

Output of hyperb.c:

For user input: 0.001, the following is outputted:

The diff at -0.900000 is 0.0031391438

The diff at -0.800000 is 0.0010705906

The diff at -0.700000 is 0.0005616904

The diff at -0.600000 is 0.0001465353

The diff at -0.500000 is 0.0000563923

The diff at -0.400000 is 0.0000335397

The diff at -0.300000 is 0.0000336042

The diff at -0.200000 is 0.0000018874

The diff at -0.100000 is 0.0000020144

The diff at -0.000000 is 0.0000000000

The diff at 0.100000 is 0.0000020144

The diff at 0.200000 is 0.0000018874

The diff at 0.300000 is 0.0000336042

The diff at 0.400000 is 0.0000335397

The diff at 0.500000 is 0.0000563923

The diff at 0.600000 is 0.0001465353

The diff at 0.700000 is 0.0005616904

The diff at 0.800000 is 0.0010705906

The diff at 0.900000 is 0.0031391438
