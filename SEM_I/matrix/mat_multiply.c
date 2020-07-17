#include<stdio.h>
void main()
{
    int a[2][3], b[3][2], sum[2][2], i, j, k;


    printf("Enter the matrix 1\n\n");
    
    // for(i=0; i<2; i++)
    //     for(j=0; j<3; j++)
    //         scanf("%d",&a[i][j]);

    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the matrix 2\n\n");
    
    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            scanf("%d",&b[i][j]);

            
//  for(i=0; i<2; i++)
//  {
//         for(j=0; j<2; j++)
//         {
//             sum[i][j] = 0;
//         }
//  }
 
//calcualtion
    for(i=0; i<2; i++)
     {
        for(j=0; j<2; j++)
        {
             sum[i][j] = 0;
             {
                for(k=0; k<3; k++)
                    sum[i][j] = sum[i][j] + a[i][k] * b[k][j];
             }
        }
     }

printf("\n\n");
//printing sum
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");    
    }


    // // mat 1
    // for(i=0; i<2; i++)
    // {
    //     for(j=0; j<3; j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");    
    // }

    // printf("\n\n");
    // // mat 2
    // for(i=0; i<3; i++)
    // {
    //     for(j=0; j<2; j++)
    //     {
    //         printf("%d ",b[i][j]);
    //     }
    //     printf("\n");    
    // }

    
        
}
