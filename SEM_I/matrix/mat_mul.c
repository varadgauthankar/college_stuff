#include<stdio.h>
void main()
{
    int a[3][2], b[2][3], sum[2][3], i, j, k;

    printf("Enter the matrix 1\n\n");
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);

    printf("Enter the matrix 2\n\n");
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);

//calcualtion
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            sum[i][j] = 0;
                for(k=0; k<2; k++)
                    sum[i][j] = sum[i][j] + a[i][k] * b[k][j];



//printing sum
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");    
    }    
}
