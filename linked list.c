
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int value;
    node*other;
}node;


typedef node* list;

void append_list(list* head,int value){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->value = value;
    new_node->other = NULL;

    if(*head == NULL){
        *head = new_node;
    }
    else{
        node* cell =*head;
        while(cell->other !=NULL){
            cell = cell->other;
        }
        cell->other = new_node;
    }
}
// show list :
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

void delete_list (node* head, int val) {
    node* cell = head;
    node* prev = NULL;

    while (cell != NULL) {
        if (cell->value == val) {
            if (prev == NULL) {
                head = cell->other;
                free(cell);
                cell = head;
            }
            else {
                prev->other = cell->other;
                free(cell);
                cell = prev->other;
            }
        }
        else {
            prev = cell;
            cell = cell->other;
        }
    }
}

int main(){
    node*list =NULL;
    append_list(&list,1);
    append_list(&list,2);
    append_list(&list,1);
    show_list(list);
    return 0;
}
