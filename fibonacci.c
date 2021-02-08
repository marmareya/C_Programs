/*
Author: Mariam Ahmed Abdeltawab
Date: 7/2/2021

This program gives the fibonacci siquence of the intered number.
*/



#include<stdio.h>

int f(int);

int main()
{
    int n, i, r;
    scanf("Fibonacci series terms are:\n");

    for(i=1; i<=n; i++)
    {
        printf("%d\n", f(r));
        r++;
    }
    return 0;
}

int f(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return (f(n-1) + f(n-2));
}
