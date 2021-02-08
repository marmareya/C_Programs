/*
Author: Mariam Ahmed Abdeltawab
Date: 3/2/2021

This program converts decimal munber to binary
*/


#include "stdio.h"


int main()
{
    int d, b;
    d = read_function();
    b = d2b(d);
    printout(b);

    return 0;
}

int read_function(void)
{
    int x;
    printf("Enter a decimal number.\n");
    scanf("%d", x);
    return x;
}

int d2b(int x)
{
    int rem, f=1, eq=0;

    while(x != 0)
    {
        rem = x%2;
        rem += f;
        eq += rem;
        x /= 2;
        f *= 10;
    }
    return eq;
}
