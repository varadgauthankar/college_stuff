#include<stdio.h>

int linear(int arr[], int key)
{
    
    for(int i=0; i<10 && arr[i]!=key; i++)
    {
        if(arr[i]==key)
            return i+1;
        else
            return -1; 
    }
}

void main()
{

    int arr[] = {1,2,3,4,5,6,7,8,9,10}, i, key;
    printf("enter number to search : ");
    scanf("%d", &key);

    printf("found at postition %d", linear(arr,key));
}