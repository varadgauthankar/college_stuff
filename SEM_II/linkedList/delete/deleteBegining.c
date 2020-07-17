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
    struct node *list, *i, *p, *q, *w;

    list = getnode();
    list->next = null;
    list->info = 10;

    p = getnode();
    p->next = null;
    p->info = 20;

    w = getnode();
    w->next = null;
    w->info = 30;

    list->next = p;
    p->next = w;


    for(i = list; i != null; i = i->next){
        printf("%d ",i->info);
    }

//  10   20   30

    for(i = list ; i->info != 30 ; i = i -> next)
        q = i;

    q->next = i->next; n
    i->next = null;
    freenode(i);

    printf("\n");
    for(i = list; i != null; i = i->next){
        printf("%d ",i->info);
    }
    
    
}
    
    
    

// //begining
//     q = list;
//     list = list->next;
//     q->next = null;

//     freenode(q);
//    

//     for(i = list; i != null; i = i->next){
//         printf("%d ",i->info);
//     }
// }

//getnode
struct node *getnode(){
    struct node* n;
    return (struct node*) malloc(sizeof(struct node));
}

///freenode
void freenode(struct node *n){
    free(n);
}
