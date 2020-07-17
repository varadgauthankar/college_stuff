#include <stdio.h>
#include <stdlib.h>

#define null 0

//structure
struct node
{
    struct node *left, *right;
    int info;
};

//functin definations
struct node *getnode();
void freenode(struct node *n);
void display(struct node *list);

//main
void main(){
    struct node *list, *i, *p, *q;

    list = getnode();
    list->left = null;
    list->right = null;
    list->info = 10;

    p = getnode();
    p->left = null;
    p->right = null;
    p->info = 20;

    //connect list and p
    list->left = null;
    list->right = p;
    p->left = list;
    p->right = null;

    display(list);

    q = getnode();
    q->left = null;
    q->right = null;
    q->info = 30;
    
    //connecting
    // 10 20 30
    // l  p  q

    q->right = list;
    list->left = q;

    list = q;

    printf("\n");
    display(list);

    
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

void display(struct node *list){
    struct node *i;
    for(i = list; i != null; i = i->right){
        printf("%d ",i->info);
    }
}