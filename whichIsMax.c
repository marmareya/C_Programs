/*
Author: Mariam Ahmed Abdeltawab
Date: 7/2/2021

This program determines which of the two numbers is the largest.
*/


#include<stdio.h>

main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d is a maximum number\n",a);
	else
	printf("%d is a maximum number\n",b);
}
