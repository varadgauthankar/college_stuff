#include<stdio.h>
#include<stdlib.h>
#define size 5

//structure
struct queue
{
    int store[size];
    int front, rear;
};

//function definations
void enqueue(struct queue *q, int num);
int dequeue(struct queue *q);

//main
void main(){
    struct queue q;
    q.front = -1; 
    q.rear = -1;

    enqueue(&q, 16);
    enqueue(&q, 19);
    enqueue(&q, 10);
    printf("Enqueued...");

    printf("\nDequeud %d", dequeue(&q));
}

//enqueue
void enqueue(struct queue *q, int num){
    if(q->rear == size - 1)
        q->rear = 0;
    else
        q->rear++;
    
    if(q->rear == q->front){
        printf("\nOVERFLOW\n");
        exit(1);
    }

    q->store[q->rear] = num;
}

//dequeue
int dequeue(struct queue *q){
    if(q->front == q->rear){
        printf("\nUNDEFLOW\n");
        exit(1);
    }

    if(q->front == size - 1)
        q->front = 0;
    else
        q->front++;

    return q->store[q->front];
}