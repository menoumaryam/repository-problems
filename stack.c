//stack for int:
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int *arr;
    int len;
    int capacity;

};
typedef struct stack stack;
// push function:
void push(stack*s,int x){
    if(s->len == s->capacity){
        s->capacity *=2;
        int *new_array = (int*)malloc(sizeof(int)*s->capacity);
        for (int i=0;i<s->len;i++){
            new_array[i]=s->arr[i];
        }
        free (s->arr);
        s-> arr =new_array;
    }
    s->arr[s->len]=x;
    s->len++;
}
// pop function:
void pop(stack*s){
    if(s->len ==0){
       printf("stack is empty \n"); 
    }
 int *new_array=(int*) malloc(sizeof(int) * s->len);
        for (int i = 0; i < s->len; i++) {
            new_array[i] = s->arr[i];
        }
        free(s->arr);
        s->arr = new_array;
}
//function peak:
int peak(stack *s){
    if(s->len == 0){
        printf("the stack is empty");
        return 0;
    }
    return s->arr[s->len -1];
    }
// fuction main:
int main(){
    stack s;
    s.capacity=1;
    s.len=0;
    s.arr = (int*)malloc(sizeof(int)* s.len);
    push(&s,5);
    push(&s,10);
    push(&s,20);
    printf("%d/n",peak(&s));
    pop(&s);
    printf("%d/n",peak(&s));
    free(s.arr);
    return 0;
}
//stack for char:
#include<stdio.h>
#include<stdlib.h>

struct stack{
    char *arr;
    int len;
    int capacity;

};
typedef struct stack stack;
// push function:
void push(stack*s,int x){
    if(s->len == s->capacity){
        s->capacity *=2;
        char *new_array = (char*)malloc(sizeof(char)*s->capacity);
        for (int i=0;i<s->len;i++){
            new_array[i]=s->arr[i];
        }
        free (s->arr);
        s-> arr =new_array;
    }
    s->arr[s->len]=x;
    s->len++;
}
// pop function:
void pop(stack*s){
    if(s->len ==0){
       printf("stack is empty \n"); 
    }
 char *new_array=(char*) malloc(sizeof(char) * s->len);
        for (int i = 0; i < s->len; i++) {
            new_array[i] = s->arr[i];
        }
        free(s->arr);
        s->arr = new_array;
}
//function peak:
char peak(stack *s){
    if(s->len == 0){
        printf("the stack is empty");
        return 0;
    }
    return s->arr[s->len -1];
    }
// fuction main:
int main(){
    stack s;
    s.capacity=1;
    s.len=0;
    s.arr = (char*)malloc(sizeof(char)* s.len);
    push(&s,5);
    push(&s,10);
    push(&s,20);
    printf("%c/n",peak(&s));
    pop(&s);
    printf("%c/n",peak(&s));
    free(s.arr);
    return 0;
}
