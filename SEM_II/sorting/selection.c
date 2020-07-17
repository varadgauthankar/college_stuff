#include<stdio.h>
void selection(int *arr)
{   
    int i, j, max, loc;
    
    for (i=9; i>0; i--)
    {
        max = arr[0];
        loc = 0;
            for(j=1; j<=i; j++)
            {
                if(max < arr[j])
                {
                    max = arr[j];
                    loc = j;
                }
            }
    arr[loc] = arr[i];
    arr[i] = max;
    
    }
}

void main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    selection(arr);

    for(int i=0 ; i<10; i++)
    printf("%d ", arr[i]);
}
