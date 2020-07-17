#include<stdio.h>
#define n 2
void main()
{
    int i;
    struct bank {
        int no, balance;
        char name[15]; 
    };

    struct bank b[n];

    for(i=0; i<n; i++){
        printf("\n\nEnter name : ");
        scanf("%s", b[i].name);
        printf("Enter the account number : ");
        scanf("%d", &b[i].no);
        printf("Enter the balance : ");
        scanf("%d", &b[i].balance);
    }

    for(i=0; i<n; i++){
        if(b[i].balance >= 30000)
        {
            printf("\n\nAccounts with balance more than 30000\n\n%d", b[i].no);
            break;
        }
        // else
        // {
        //     printf("NO Accounts");
        //     break;
        // }
    }
}