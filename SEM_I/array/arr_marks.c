#include<stdio.h>
void main()
{
    int arr[10]={23, 12, 4, 12, 40, 30, 50, 2, 3, 5}, i;
    
    printf("Marks before adding\n");

    for(i=0; i<10; i++)
        printf("%d ",arr[i]);

    for(i=0; i<10; i++)
        if(arr[i]>=30)
            arr[i]+=5;

    printf("\nMarks before adding\n");
    for(i=0; i<10; i++)
        printf("%d ",arr[i]);
}