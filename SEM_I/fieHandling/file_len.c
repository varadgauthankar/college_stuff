#include<stdio.h>
#include<stdlib.h>
void main()
   {
    char ch;
    int x = 0;
    FILE *p;
    p=fopen("abc.txt","r");
    
    while(1)
    {
        ch = getc(p);
        if(ch==EOF)
            {
               printf("EOF ");
               printf("%d is a lenght ", x);
               fclose(p);
               exit(1);
            }   
            x++;
    }    
    
}


