/*
Author: Mariam Ahmed Abdeltawab
Date: 7/2/2021

This program gives the sum and the average of the intered 5 numbers.
*/


#include "stdio.h"


void main()
{
    int i, x, sum = 0;
    int avg; //initialization

    printf("Please inter 5 numbers:\n");

    for (i=0; i<5 ; i++)
    {
        scanf("%d", &x);
        if (x>=0 && x<= 100)
        {
            sum += x;
        }

    }
    avg = sum/5.0;
    printf("===========\n");
    printf("sum=%d, Average=%d \n", sum, avg);
}
