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
    struct node *list, *i, *p, *q, *w, *r, *x;

    list = getnode();
    list->left = null;
    list->right = null;
    list->info = 10;

    p = getnode();
    p->left = null;
    p->right = null;
    p->info = 20;

    //connect list and p
    //list->left = null;
    list->right = p;
    p->left = list;
   // p->right = null;

    x = getnode();
    x->left = null;
    x->right = null;
    x->info = 30;

    p->right = x;
    x->left = p;

    

    display(list);

    q = getnode();
    q->left = null;
    q->right = null;
    q->info = 100;
    
    for(i=list; i->info != 20 && i!=null; i=i->right);
 
    // 10 100 20 30
    // w  q   i 

    //connecting
    w = i->left;

    q->left = w;
    w->right = q;

    q->right = i;
    i->left = q;
    
    
        // w->right = q;

    // q->right = r;
    // r->left = q;


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