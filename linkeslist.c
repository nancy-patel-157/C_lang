#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef stuct node node;

node createnode(){
     node ptr= (node) malloc(sizeof(stuct node));
     ptr->next=NULL;
     return ptr;

}
void main(){
    node first = NULL;
    int x;
    first=createnode();
    printf("first");
    scanf("%d",&x);
    first->data=x;
    first->next=createnode();
    printf("second");
    scanf("%d",&x);
    first->next->data=x;
    printf("The list is: %d %d",first->data, first->next->data);
}