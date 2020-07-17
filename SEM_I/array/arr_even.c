 2#include<stdio.h>
void main()
{
    int arr[10] = {10, 2, 8, 3, 79}, i;
    for(i=0; i<5; i++)
        if(i%2==0)
            printf("%d - even position\n",arr[i]);
     
}
