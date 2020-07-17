#include<stdio.h>
void main()
{
    int arr[5]={2, 45, 26, 12, 3}, i, check = 0;

    for(i=0; i<5; i++)
        if(arr[i]==25)
        {
            check++;
            break;
        }

    if(check)
            printf("Number is present\n");
        else
            printf("number not present\n");            

}