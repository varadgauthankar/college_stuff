#include<stdio.h>
int binary(int key, int arr[])
{
    int lm = 0, um = 9, mid;
    while(lm<=um)
    {
        mid = (lm+um)/2;
        if(arr[mid] == key)
            {
                return mid+1;
            }
            else
            {
                if(key > arr[mid])
                        lm = mid+1;
                    else
                        um = mid-1; 
            }
    }
}

void main()
{
    int key, arr[]={1,2,3,4,5,6,7,8,9,10};
    
    printf("enter number to search : ");
    scanf("%d", &key);

    printf("found at position %d ",binary(key,arr));
}