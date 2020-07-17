#include<stdio.h>
#include<stdlib.h>
void main()
   {
    char ch;
    FILE *p, *q;
    p=fopen("abc.txt","r");
    q=fopen("xyz.txt","w");
    
    while(1)
    {
        ch = getc(p);
   
        if(ch==EOF)
            {
               fclose(p);
               fclose(q);
               exit(1);
            }   
          putc(ch, q); 
    }
}
