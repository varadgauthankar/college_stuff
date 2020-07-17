#include<stdio.h>
void main()
{
    int arr1[5]={1, 2, 3, 4, 5}, arr2[5]={6, 7, 8, 9, 10}, mer[10], i, j;

    for(i=0; i<5; i++)
        mer[i] = arr1[i];

    for(j=0; i<10; i++,j++)
        mer[i] = arr2[j];

    for(i=0; i<10; i++)
        printf("%d ", mer[i]);

}