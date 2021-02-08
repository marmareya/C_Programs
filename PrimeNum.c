/*
Author: Mariam Ahmed
Date: 2/2/2021

This program displays the list of prime numbers in the range between any 2 given integers.
*/

#include "stdio.h"

void main()
{
    int L, H, i, j, f;

    printf("Enter the lower range interval: \n");
    scanf("%d", &L);

    printf("Enter the higher interval: \n");
    scanf("%d", &H);

    printf("The prime numbers between %d and %d are:\n", L, H);

    for (i=L+1; i<H; ++i)
    {
        f = 0;
        for(j=2; j<=i/2; ++j)
        {
            if(i%j == 0)
            {
                f = 1;
                break;
            }
        }
        if(f == 0)
            printf("%d\t", i);
    }

}
