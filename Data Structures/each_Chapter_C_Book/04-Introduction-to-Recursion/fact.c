/*
 * File: fact.c
 * ------------
 * This program includes the factorial function and a test
 * program that prints the factorials of the numbers between
 * the limits LowerLimit and UpperLimit, inclusive.
 */

#include <stdio.h>
#include "genlib.h"

/*
 * Constants
 * ---------
 * LowerLimit -- Starting value for factorial table
 * UpperLimit -- Final value for factorial table
 */

#define LowerLimit 0
#define UpperLimit 7

/* Function prototypes */

int Fact(int n);

/* Main program */

main()
{
    int i;

    for (i = LowerLimit; i <= UpperLimit; i++) {
        printf("%d! = %5d\n", i, Fact(i));
    }
}

/*
 * Function: Fact
 * Usage: f = Fact(n);
 * -------------------
 * This function returns the factorial of the argument n (n!),
 * recursively applying the following mathematical definition:
 *
 *            /  1, if n = 0
 *    n!  =  <
 *            \  n * (n-1)!, if n > 0
 */

int Fact(int n)
{
    if (n == 0) {
        return (1);
    } else {
        return (n * Fact(n - 1));
    }
}
