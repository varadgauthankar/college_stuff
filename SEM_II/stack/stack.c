#include <stdio.h>
#include <stdlib.h>
#define size 5

struct stack
    {
        int store[size];
        int stacktop;
    };
    
void push(struct stack *s, int num);
int pop(struct stack *s);



void main()
{
    struct stack s;
    s.stacktop = -1;

    push(&s,16);
    printf("16 pushed...\n\n");

    printf("popped  %d",pop(&s));
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
