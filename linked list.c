
#include<stdio.h>
#include<stdlib.h>

struct memes{
    int value;
    struct memes*other;
};

typedef struct memes node;
typedef struct memes* list;

void append_list(list*list1,int x){
    node* new_node = (node*)malloc(sizeof(int));
    new_node->value = x;
    new_node->other = NULL;

    if(*list1 == NULL){
        *list1 = new_node;
    }
    else{
        node* cell =*list1;
        while(cell->other !=NULL){
            cell = cell->other;
        }
        cell->other = new_node;
    }
}
void show_list(list list1){
    printf("[");
    while(list1 !=NULL){
        printf("%d",list1->value);
        if(list1->other != NULL){
            printf(",");
        }
        list1 = list1->other;
    }
    printf("]\n");
}
int main(){
    list list = NULL;
    append_list(&list,1);
    append_list(&list,2);
    append_list(&list,1);
    show_list(list);
    return 0;
}