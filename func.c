/*
Author: Mariam Ahmed Abdeltawab
Date: 8/2/2021

This program shows the use of functions.
*/




#include <stdio.h>

void add(int a, int b) // func prototype
{
    printf("a= %d, b= %d \n", a, b);
    printf("%d\n", a+b);
}
void sub(int a, int b)
{
    printf("%d\n", a-b);
}
void mul(int a, int b)
{
    printf("%d\n", a*b);
}



void main()
{
    int x = 5;
    int y = 6;
    char choice;

    void (*ptr_arr[])(int , int ) = {add, sub, mul};

    printf("Enter your choice:\n");
    printf(" 1- add \n 2- sub \n 3-mul\n");
    scanf("%d", &choice);
    if ((choice>3) || (choice<1))
        printf("Wrong choice!\n");
        else
            (*ptr_arr[choice-1])(x,y); // *ptr_arr[0] add(x,y)

    /*
    int (*ptr_add)(int a, int b); // declaration
    ptr_add(x,y);

    ptr_add = add; // initialization
    z = ptr_add(x,y);  //calling
    printf("%d\n", z);
    */
}
