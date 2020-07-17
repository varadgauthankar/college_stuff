#include<stdio.h>
#define n 2
void main()
{
    int i;
    struct student
    {
        int rolln, marks;
        char name[10];
    };

    struct student s[n];

    for(i=0; i<n; i++)
    {
        printf("\nEnter the Name,rollno and marks of students : ");
        scanf("%s", s[i].name);
        scanf("%d", &s[i].rolln);
        scanf("%d", &s[i].marks);    
    }
    
    for(i=0; i<n; i++)
    {
        if(s[i].marks>=45)
            printf("\nroll no = %d ",s[i].rolln);
    }
}