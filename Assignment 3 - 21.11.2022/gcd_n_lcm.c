/*
Write a program to find GCD and LCM of two numbers.
*/

#include <stdio.h>

void main()
{
    int a, b, x, y, t, gcd, lcm;

    printf("enter two integer\n");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    gcd = a;
    lcm = (x * y) / gcd;

    printf("GCD : %d", gcd);
    printf("\nLCM : %d", lcm);
}