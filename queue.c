#include<stdio.h>
#include<stdlib.h>

struct queue{
    int *arr;
    int first;
    int last;
    int capacity;
};
typedef struct queue queue;
//push function:
void push(queue*q,int x){
    if(q->last+1 ==q->capacity){
       q->capacity*=2;
       int *new_array=(int*)malloc(sizeof(int)*(q->capacity));
       for (int i = 0; i < q->last+1; i++)
       {
    new_array[i] =q->arr[i];
       }
    free(q->arr);
    q->arr = new_array;
    }
    if(q->first==-1 && q->last==-1){
        q->first=q->last=0;
        q->arr[q->last]=x;
    }
    else{
        q->last++;
    }
}
//pop function:
void pop(queue *q){
    if(q->first==-1 && q->last==-1){
        printf("queue is empty");
        return ;
    }
    else{
        q->first++;
    }
}
//peak function:
int peak(queue*q){
    if(q->first==-1 && q->last==-1){
        printf("queue is empty");
        return 0;
    }
    else{
        return q->arr[q->first];
    }
}

void free_queue(queue *q) {
    free(q->arr);
    q->first = -1;
    q->last = -1;
    q->capacity = 0;
}

int main() {
    queue q;
    q.first = -1;
    q.last = -1;
    q.capacity = 1;
    q.arr = (int*)malloc(sizeof(int) * q.capacity);
    for (int i = 0; i < 10; i++) {
        push(&q, i);
    }

    while (q.first != -1) {
        printf("%d\n", peak(&q));
        pop(&q);

    free_queue(&q);
    return 0;
}
}
//queue for char:
#include<stdio.h>
#include<stdlib.h>

struct queue{
    char *arr;
    int first;
    int last;
    int capacity;
};
typedef struct queue queue;
//push function:
void push(queue*q,char x){
    if(q->last+1 ==q->capacity){
       q->capacity*=2;
       char *new_array=(char*)malloc(sizeof(char)*(q->capacity));
       for (int i = 0; i < q->last+1; i++)
       {
    new_array[i] =q->arr[i];
       }
    free(q->arr);
    q->arr = new_array;
    }
    if(q->first==-1 && q->last==-1){
        q->first=q->last=0;
        q->arr[q->last]=x;
    }
    else{
        q->last++;
    }
}
//pop function:
void pop(queue *q){
    if(q->first==-1 && q->last==-1){
        printf("queue is empty");
        return ;
    }
    else{
        q->first++;
    }
}
//peak function:
char peak(queue*q){
    if(q->first==-1 && q->last==-1){
        printf("queue is empty");
        return 0;
    }
    else{
        return q->arr[q->first];
    }
}

void free_queue(queue *q) {
    free(q->arr);
    q->first = -1;
    q->last = -1;
    q->capacity = 0;
}

int main() {
    queue q;
    q.first = -1;
    q.last = -1;
    q.capacity = 1;
    q.arr = (char*)malloc(sizeof(char) * q.capacity);
    for (int i = 0; i < 10; i++) {
        push(&q, i);
    }

    while (q.first != -1) {
        printf("%c\n", peak(&q));
        pop(&q);

    free_queue(&q);
    return 0;
}
}
