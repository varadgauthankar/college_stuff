#include <stdio.h>
#include <stdlib.h>
#define size 10

struct stack
    {
        char store[size];
        int stacktop;
    };
    
void push(struct stack *s, char x);
char pop(struct stack *s);
int validity(struct stack *s, char *exp);
int empty(struct stack *s);


void main()
{
    char exp[]="[]{()";

    struct stack s;
    s.stacktop = -1;
    
    int valid = validity(&s,exp);


    if(valid)
        printf("VALID");
    else
        printf("INVALID");
 
}

int validity(struct stack *s, char *exp)
{  
    int i=0;
    char x;
    int valid = 1;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(s,exp[i]);
        else
            if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
            {       
                if(empty(s))
                    valid = 0;           
            // }  <------------------------ closed if here  
                else
                    x = pop(s);
               
                    if(((exp[i]==')') && (x=='(')) || ((exp[i]=='}') && (x=='{')) || ((exp[i]==']') && (x=='[')))
                        valid = 1;
                    else 
                        valid = 0;        
            }  //  <-------------------- supposed to close here 
        i++;
    }

    if(!empty(s))
        valid = 0;
    
    return valid;
}

//empty
int empty(struct stack *s)
{
    if(s->stacktop == -1)
        return 1;
    else
        return 0;
}

//PUSH
void push(struct stack *s, char x)
{
    if(s->stacktop == size-1)
    {
        printf("OVERFLOW");
        exit(1);
    }
    else
    {
        s->stacktop++;
        s->store[s->stacktop] = x;
    }
}

//POP
char pop(struct stack *s)
{
    if (s->stacktop == -1)
    {
        printf("UNDERFLOW");
        exit(1);
    }
    else
    {
        char i = s->store[s->stacktop];
        s->stacktop--;
        return i;
    }
}
