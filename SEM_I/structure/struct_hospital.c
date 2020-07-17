#include<stdio.h>
#define n 2
void main()
{
    int i, j, max=0;

    struct hospital
    {
        int nod,now;
        char name[10];
    };

    struct hospital h[n];

    for(i=0; i<n; i++)
    {
        printf("Enter numbers of doctors: ");
        scanf("%d", &h[i].nod);
        printf("Enter number of wards : ");
        scanf("%d", &h[i].now);
        printf("Enter the name : ");
        scanf("%s", h[i].name); 
    }

    //hospital with highest numbers of doctors
    for(i=0; i<n; i++)
    {
        if(h[i].nod>max)
        {
            max = h[i].nod;
            j=i;  
        }
    }

    printf("\nhospital with highest numbers of docors = %s\n\n", h[j].name);

    //no. of doc present in ward 6

    for(i=0;i<n;i++)
    {
        if(h[i].now==6)
        {
            printf("Doctors in ward 6 = %d",h[i].nod);
            break;
        }
        else 
        {
            printf("ward not present");
            break;
        }
    }

}