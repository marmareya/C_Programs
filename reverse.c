/*
Author: Mariam Ahmed Abdeltawab
Date: 7/2/2021

This program reverses the intered digits of a number.
*/


#include "stdio.h"

void main()
{
    int n, rev = 0, remainder;
    printf("Enter a number:\n");
    scanf("%d", &n);

    while (n != 0)
    {

        remainder = n % 10;
        rev = rev*10 + remainder;
        n /=10;
    }

    printf("Reversed= %d", rev);

}
