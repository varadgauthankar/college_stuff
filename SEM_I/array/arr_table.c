#include<stdio.h>
void main()
{
    int arr[10], i;

    for(i=0; i<10; i++)
        arr[i]=5*(i+1);

    for(i=0; i<10; i++)
        printf("%d\n",arr[i]);
}