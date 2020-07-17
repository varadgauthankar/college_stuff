#include<stdio.h>
void main()
{
    int arr[50], n, i;
    printf("How many numbers : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
       arr[i]=5;
       
       // scanf("%d",&arr[i]);

    for(i=0; i<n; i++)
        printf("%d\n",arr[i]);
}