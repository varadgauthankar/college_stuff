#include<stdio.h>
int bubble(int *arr)
{
int flag=1, temp;
for(int pass=0; pass<10-1 && flag==1; pass++)
{
    flag = 0;for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int j=0; j<10-1-pass; j++)
    {
        if(arr[j]>arr[j+1])
        {
            flag=1;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
}


void main()
{
    int arr[]={9,8,3,4,2,1,3,5,6,3};
    
    bubble(arr);

    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}


