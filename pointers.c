/*
Author: Mariam Ahmed

  this program shows the use of POINTERS to find sum, avg, min, max
*/



#include <stdio.h>

void process_degrees(int *arr, float *avg, int *sum, int *max, int *min)
{

    int i;

    for(i=0; i<6; i++)
    {
        *sum += arr[i];
        if(*min <= arr[i])
        {
            *min = arr[i];
        }
        if(*max >= arr[i])
        {
            *max = arr[i];
        }
    }
    *avg = (*sum/6);
}

int main()
{
    float avg;
    int  max, min, sum=0;
 /*
    printf("Enter the number of students:\n");
    scanf("%d", &n);

    printf("Enter students grades:\n", n);
    for(i=0; i<n; i++) //fills the array
    {
        scanf("%d", &arr[i]);
    }
*/
    //int arr[] = {10, 9, 7, 2, 1, 8};
    int arr[] = {5, 7, 8, 3, 9, 10};
    process_degrees(&arr, &avg, &sum, &max, &min); // passing them to the funcion
    printf(" sum = %d \n avg = %d \n max= %d \n min= %d", sum, avg, max, min);

    return 0;

}
