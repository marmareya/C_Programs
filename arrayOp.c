/*
Author: Mariam Ahmed Abdeltawab
Date: 5/2/2021

This program gives the max, min, sum avg of the digits in the array.
*/



#include <stdio.h>

void func(int arr[], int size, int x)
{
    sum
    avg
    max
    min

    int i;
    printf(" i am in func before: x = %d, &x= %d\n", x, &x);
    for(i; i<size; i++)
    {
        arr[i] += 2;
    }
    x = 70;
    printf(" i am in func after: x = %d, &x= %d\n", x, &x);

}

void main()
{
    int  arr[] = {1,2,3,4,5};
    int x ;
    printf(" i am in main: x = %d, &x= %d\n", x, &x);
    printf("%d %d %d\n", arr, &arr, &arr[0]); // they're the same
    printf("arr size = %d, element size= %d\n", sizeof(arr), sizeof(arr[0]));
    x = func(arr, sizeof(arr)/sizeof(arr[0]), x); // 20/4 = 5  arrays name as address
    printf(" i am in main after: x = %d, &x= %d\n", x, &x);
}
