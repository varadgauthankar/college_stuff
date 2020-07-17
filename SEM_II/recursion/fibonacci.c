#include<stdio.h>
int fibo(int n)
{
    int c;
    if((n==0) || (n==1))
        return n;
    else
        c = fibo(n-1) + fibo(n-2);
        return c;
}

void main()
{
    int n=6;
    printf("fibonacci of %d is : %d",n, fibo(n));
}