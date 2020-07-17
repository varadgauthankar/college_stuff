#include<stdio.h>
void main()
{
    int a[3][3], b[3][3], sum[3][3], i, j;

    printf("Enter the matrix 1\n\n");
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);

    printf("Enter the matrix 2\n\n");
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");    
    }

    
}




