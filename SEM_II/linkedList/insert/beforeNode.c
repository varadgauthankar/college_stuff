#include <stdio.h>
#include <stdlib.h>

#define null 0

//structure
struct node
{
    struct node* next;
    int info;
};

//functin definations
struct node *getnode();
void freenode(struct node *n);

//main
void main(){
    struct node *list, *i, *p, *q, *x, *j;

    //node 1
    list = getnode();
    list->next = null;
    list->info = 10;

    //node 2
    p = getnode();
    p->next = null;
    p->info = 20;
    list->next = p;

    //node 3
    q = getnode();
    q->next = null;
    q->info = 30;
    p->next = q;

    //traverse
    for(i = list; i->info != 20; i = i->next)
        j = i;

    //node to be insert
    x = getnode();
    x->info = 1;
    x->next = null;
    
    j->next = x;
    x->next = i;
    

    for(i = list; i != null; i = i->next){
        printf("%d ",i->info);
    }
}

//getnode
struct node *getnode(){
    struct node* n;
    return (struct node*) malloc(sizeof(struct node));
}

///freenode
void freenode(struct node *n){
    free(n);
}