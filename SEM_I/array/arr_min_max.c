#include<stdio.h>
void main()
{
    int arr[5]={5,6,8,12,2}, i, min = 10, max = 0;

    for(i=0; i<5; i++)
        if(max<arr[i])
            max = arr[i];

    for(i=0; i<5; i++)
        if(min>arr[i])
            min = arr[i];

    printf("%d - max \n%d - min", max, min);
}