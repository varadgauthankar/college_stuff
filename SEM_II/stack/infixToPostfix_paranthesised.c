#include <stdio.h>
#include <stdlib.h>
#define size 15

struct stack
    {
        char store[size];
        int stacktop;
    };


void convert(struct stack *s, char *infix, char *postfix);
void push(struct stack *s, char num);
int pop(struct stack *s);
int empty(struct stack *s);
int prcd(char op);

//main
void main()
{
    char infix[] = "((a-(b+c))*d)^(e+f)";  //a*(b+c)
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
        //printf("st = %d",s->stacktop);
        if(symb >= 'a' && symb <= 'z')
        {   
            postfix[j] = symb;
            j++;
        }
        else
        {   
            if(symb == '+' || symb == '-' || symb == '*'|| symb == '/')
            {       
                while((!empty(s) && !(prcd(symb) > prcd(s->store[s->stacktop]))))
                {   
                    x = pop(s);
                    postfix[j] = x;
                    j++;
                }
            }

            //paranthesis check
            if(symb != ')')
            {
                push(s, symb);
            }
             else if(symb == ')')
             { 
                
                while(s->store[s->stacktop] != '(')
                {
                    x = pop(s);
                    postfix[j] = x;
                    j++;
                }
                pop(s);
            }
            
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
    
    postfix[j] = '\0';
    printf("%s",postfix);
}


int prcd(char op)
{
   // printf("in");
    if(op == '^')
        return 3;
    if(op == '*' || op == '/')
        return 2;
    if(op == '+' ||op == '-')
        return 1;
    if(op == '(')
        return 0;
    
}



void push(struct stack *s, char num)
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
        //printf("\n%c inserted at %d",s->store[s->stacktop], s->stacktop);
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
