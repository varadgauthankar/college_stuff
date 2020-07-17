#include<stdio.h>
void swap(int *a, int *b);

void main(){
    int x=4, y=8;
    printf("a = %d\nb = %d",x,y);
    swap(x,y);
    printf("\nafter swapping...\na = %d\nb = %d",x,y);
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}