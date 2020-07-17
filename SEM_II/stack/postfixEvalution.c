#include <stdio.h>
#include <stdlib.h>
#define size 15

struct stack
    {
        char store[size];
        int stacktop;
    };
    
void push(struct stack *s, int num);
int pop(struct stack *s);
int evaluate(struct stack *s, char *postfix);
int calculate(int x, int y, char symb);
int empty(struct stack *s);

void main()
{
    char postfix[] = "23+51-*";
    struct stack s;
    s.stacktop = -1;

    printf("Answer = %d", evaluate(&s, postfix));

}

int evaluate(struct stack *s, char *postfix)
{
    int i=0, x, y, z, ans;
    char symb;

    while(postfix[i] != '\0')
    {
        symb = postfix[i];
        
        if(symb >= '0')
            push(s,(int)(symb - '0'));
        else
        {
            x = pop(s);
            y = pop(s);
            ans = calculate(x,y,symb);
            push(s, ans);
        }
        i++;
    }
    
    z = pop(s);
    return z;
}

int calculate(int x, int y, char symb)
{
    int ans;
    switch(symb)
    {
        case '+':
        ans = x + y;
        break;

        case '-':
        if(x>y)
            ans = x - y;
        else
            ans = y - x;
        break;

        case '*':
        ans = x * y;
        break;

        case '/':
        ans = x / y;
        break;
    }
    
    return ans;
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

