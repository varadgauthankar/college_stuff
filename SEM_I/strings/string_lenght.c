#include<stdio.h>
void main()
{
    char arr[50]; int i;

    printf("Enter string : ");
    scanf("%s", arr);

    for(i=0; arr[i]!= '\0'; i++);

    printf("length = %d", i);
}