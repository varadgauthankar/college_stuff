#include<stdio.h>
void main()
{
    int arr[5]={5, 3, 5, 5, 5}, avg, i;

    for(i=0; i<5; i++)
        avg += arr[i];
        avg /= 5;

    printf("%d ",avg);    
}
