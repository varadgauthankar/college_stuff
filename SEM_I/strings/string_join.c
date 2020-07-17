#include<stdio.h>
void main()
{
    char first[10], last[10], name[20];
    int i, j;

    printf("Enter first name : ");
    scanf("%s", first);

    printf("Enter last name : ");
    scanf("%s", last);

    for(i=0; first[i]!='\0'; i++)
        name[i]=first[i];

    

    for(j=0; last[j]; j++, i++)
        name[i]=last[j];

    name[i] = '\0';    

    printf("full name : %s", name);
}