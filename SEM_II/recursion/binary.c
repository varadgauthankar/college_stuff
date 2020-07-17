#include<stdio.h>
int binary(int arr[], int val, int low, int high)
{
    int mid;
    if(low>high)
        return -1;

    mid = (low + high)/2;
    
    if(arr[mid]==val)
        return mid+1;
    else
        if(val > arr[mid])
            return(binary(arr, val, mid+1, high));
        else
            return(binary(arr, val, low, mid-1));
}

void main()
{
    int arr[] = {4,5,3,2,5,6};
    int val = 3;
    int low = 0;
    int high = 5;
    printf("%d present at location %d",val,binary(arr, val, low, high));
}