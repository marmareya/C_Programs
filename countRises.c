/*

Author: Mariam Ahmed Abdeltawab
Date: 8/2/2021

This program counts the the rising edges (AKA transitions from 0 to 1)
*/


#include <stdio.h>

unsigned int risingEdgeCounter(unsigned char PinReading);

int main()
{
    int i, j;
    int arr[] = {1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1};
    int n = sizeof(arr);
    int count=0;
    for(int i=0; i<n; i++)
    {
        if((arr[i]==1) && (arr[i-1]==0))
        count++;
    }
    printf("The number of rising edges = %d", count);

    return 0;
}

