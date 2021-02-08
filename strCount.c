/*
Author: Mariam Ahmed Abdeltawab
Date: 6/2/2021

This program calculates the number of characters in a string.
*/


#include<stdio.h>

int calcStrLength(char *i)
{
    int count = 0;
    while (*i != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void main()
{

    char str[10];
    int len;

    printf("Enter any string:\n");
    scanf("%s", str);

    len = calcStrLength(str);
    printf("The length is: %d", len);
}
