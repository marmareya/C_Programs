/*
Author: Mariam Ahmed Abdeltawab
Date: 2/2/2021

This program prints an array until it raches a certain digit.
*/


#include <stdio.h>


int main()
{
   int i;
   char c[] = "This day is a great day";
   for (i=0; i<sizeof(c); i++)
   {
       if(c[i]=='g')
        break;
       else
        printf("%c", c[i]);
   }

   return(0);
}
