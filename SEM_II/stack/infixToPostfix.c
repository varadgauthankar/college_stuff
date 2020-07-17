#include <stdio.h>
#include <stdlib.h>
#define size 15

struct stack
    {
        char store[size];
        int stacktop;
    };


void convert(struct stack *s, char *infix, char *postfix);
void push(struct stack *s, int num);
int pop(struct stack *s);
int empty(struct stack *s);
int prcd(char op);





void main()
{
    
    char infix[] = "a*b+c";
    char postfix[20];
    struct stack s;
    s.stacktop = -1;
    convert(&s, infix, postfix);
   

    
   
}



void convert(struct stack *s, char *infix, char *postfix)
{
    int i=0, j=0;
    char symb, x;
    

    while(infix[i] != '\0')
    {
        symb = infix[i];

         
        
        if(symb >= 'a' && symb <= 'z')
        {   
            postfix[j] = symb;
            
            j++;
        }
        else
        {            
            while((!empty(s) && !(prcd(symb) > prcd(s->store[s->stacktop]))))
            {   
                

                x = pop(s);
                postfix[j] = x;
                j++;
            }
            
            push(s, symb);
        }
        
        i++;
    }

   
    while(!empty(s))
    {   
        char pp;
        pp = pop(s);
        
        postfix[j] = pp;
        
       
        j++;
    }
//j--;
    postfix[j] = '\0';
     printf("%s",postfix);
}


int prcd(char op)
{
    if(op == '*' || op == '/')
        return 1;
    if(op == '+' ||op == '-')
        return 0;
    
}



void push(struct stack *s, int num)
{
    
    if(s->stacktop == size-1)
    {
        printf("OVERFLOW");
        exit(1);
    }
    else
    {
        s->stacktop++;
        s->store[s->stacktop] = num;
    }
}


int pop(struct stack *s)
{
    if (s->stacktop == -1)
    {
        printf("UNDERFLOW");
        exit(1);
    }
    else
    {
        int i = s->store[s->stacktop];
        s->stacktop--;
        return i;
    }
}


int empty(struct stack *s)
{
    if(s->stacktop == -1)
        return 1;
    else
        return 0;
}
