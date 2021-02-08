/*
Author: Mariam Ahmed
Date: 2/2/2021

This program counts the entered number digits.
*/

#include "stdio.h"

void main()
{
    long long n;

    int i = 0;

    printf("Enter a number consists of less than 10 digits.\n");
    scanf("%lld", &n);

    while (n != 0)
    {
        n /= 10;
        ++i;
    }
    printf("This number consists of  %d  digits", i);
}
