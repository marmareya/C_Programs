/*
Author: Mariam Ahmed Abdeltawab
Date: 4/2/2021

This program gives the intered count of the fibonacci numbers.
*/



#include <stdio.h>

int main()
{
    int n, first=0, second=1, next, r;

    printf("Enter the number:\n");
    scanf("%d", &n);

    printf("First %d terms of the fibonacci series are: \n", n);

    for (r=0; r<n; r++)
    {
        if (r<=1)
            next = r;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d \n", next);
    }
    return 0;
}
