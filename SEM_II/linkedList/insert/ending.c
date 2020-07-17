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
    struct node *list, *i, *p;

    list = getnode();
    list->next = null;
    list->info = 10;

    p = getnode();
    p->next = null;
    p->info = 20;

    list->next = p;

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