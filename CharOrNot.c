/*
Author: Mariam Ahmed Abdeltawab
Date: 7/2/2021

This program determines if the input is a character or not.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Please enter the character that you want to check \n");
    scanf("%c", &ch);

    if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("the character %c is an alphabet.", ch);

    else
        printf("the character %c is not an alphabet.", ch);

    return 0;
}
