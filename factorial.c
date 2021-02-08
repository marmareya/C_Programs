/*
Author: Mariam Ahmed Abdeltawab
Date: 7/2/2021

This Program gives the factorial of the intered number.
*/



#include "stdio.h"

void main()
{
    int i, n;

    long long f = 1;
    i = 1;
    printf("Enter a number to find its factorial: \n");
    scanf("%d", &n);


    while(i<=n)
    {
        f*=i;
        i++;

    }
    printf("The factorial of %d is: %lld", n, f);


    /*for(i; i<=n; i++) //
    {
        f*=i;
    }
    printf("The factorial of %d is: %d", n, f); */

}
