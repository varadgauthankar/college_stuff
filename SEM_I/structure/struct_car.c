// print name of car which is most expensive
// print nameof car with highest milage
// print all the car which is manufactured in 2000

#include<stdio.h>
#define n 2

void main()
{
    int i, j, max=0;
    struct car
    {
        int no, year, milage, cost;
        char name[5];
    };

    struct car cars[n];

    for(i=0; i<n; i++)
    {
        printf("\n\nEnter numbers of car: ");
        scanf("%d", &cars[i].no);
        printf("Enter year of manufacture : ");
        scanf("%d", &cars[i].year);
        printf("Enter the milage : ");
        scanf("%d", &cars[i].milage);
        printf("Enter the cost of car : ");
        scanf("%d", &cars[i].cost);
        printf("Enter the name of car : ");
        scanf("%s", cars[i].name);
    }

//expensive
    for(i=0; i<n; i++){
        if(cars[i].cost>max){
            max = cars[i].cost;
            j=i;
        }
    }

    printf("\n\nmost expensive car is %s", cars[j].name);

//milage
    for(i=0, max=0; i<n; i++){
        if(cars[i].milage>max){
            max = cars[i].milage;
            j=i;
        }
    }

    printf("\n\ncar with highest milage %s", cars[j].name);

    //manufacture in 2000

    for(i=0; i<n; i++){
        if(cars[i].year==2000){
            printf("\n\ncar manufacture in 2000 is %s", cars[j].name);
        }
    }

}