#include<stdio.h>  //263 264
#include<stdlib.h>
#define null 0

struct node *makeTree(int num);
void setRight(struct node *w, int y);
void setLeft(struct node *w, int y);
void inTrav(struct node *tree);


struct node
{
    int info;
    struct node *left, *right;
};


void main(){
    int num;
    struct node *tree, *p, *q;
    int ch;
    
    printf("enter a number : ");
    scanf("%d",&num);

    tree = makeTree(num);

    printf("continue? (0/1) : ");
    scanf("%d", &ch);

    while(ch == 1){
        p = tree;
        q = p;

        printf("enter number : ");
        scanf("%d",&num);

        while(q != null){
            p=q;
            if(num > p->info)
                q = p->right;
            else
                q = p->left; 
        }

        if(num > p->info)
            setRight(p,num);
        else 
            setLeft(p,num);

        printf("continue? (0/1) : ");
        scanf("%d", &ch);
    }

    inTrav(tree);
}

struct node *makeTree(int y){
    struct node *x;
    x = (struct node*)malloc(sizeof(struct node));
    x->info = y;
    x->left = null;
    x->right = null;
    return x;
}

void setLeft(struct node *w, int y){
    w->left = makeTree(y);
}

void setRight(struct node *w, int y){
    w->right = makeTree(y);
}

void inTrav(struct node *p){
    if(p != null){
        inTrav(p->left);
        printf("%d ", p->info);
        iinTrav(p->left);
        printf("%d ", p->info);
        inTrav(p->right);nTrav(p->right);
    }
}
