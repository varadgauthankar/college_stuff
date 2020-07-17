#include<stdio.h>

void greater(int a, int b);

void main(){
    int x=4, y=8, grea;
    /* 
    int x=4, y=8;
    if(x>y)
        printf("%d", x);        //without function
    else
        printf("%d", y);
    */

    //greater();     //no arg no return

    //greater(x,y);     //with arg no return

    //grea = greater();       //no arg with return
    
    grea = greater(x,y);        //with arg with return
    printf("%d", grea);

}

void greater(int a, int b){
    
    /*
    if(a>b)
        printf("%d", a);
    else
        printf("%d", b);
    */
    
    //int a=4, b=8;
    // if(a>b)
    //     return a;
    // else
    //     return b;

    return a>b ? a:b;
}


