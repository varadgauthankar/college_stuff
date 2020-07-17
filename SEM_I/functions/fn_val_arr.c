#include<stdio.h>
void arr_pass(int *a);
void main(){
    int arr[4] = {1,6,0,1};
    arr_pass(arr);
}

void arr_pass(int a){
    for (int i=0; i<4; i++)
        a[i]+=1;
        printf("%d"a[i]);
}