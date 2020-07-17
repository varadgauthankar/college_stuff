#include<stdio.h>
void main()
{
    int arr[5]={10, 10, 10, 10, 10}, sum, i;

    for(i=0; i<5; i++)
        sum+=arr[i];

    printf("%d\n",sum);
}

