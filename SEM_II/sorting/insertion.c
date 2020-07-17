#include <stdio.h>
void insertion(int *arr)
{
    int i,j,z;
    for(i=1; i<10; i++)
    {
        z = arr[i];
        for(j=i-1; j>=0 && arr[j]>z; j--)
        { 
            arr[j+1] = arr[j];
        }
        arr[j+1] = z;
    }
}

void main()
{
    int arr[] = {89,4,45,8,1,3,43,56,34,89};
    insertion(arr);

    for(int i=0 ; i<10; i++)
    printf("%d ", arr[i]);
}