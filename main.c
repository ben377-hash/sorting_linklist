#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}Node;
Node *head=NULL;
void create(int n){
    Node *nw,*temp;
    while(n--){
        nw=malloc(sizeof(Node));
        printf("Enter data: ");
        scanf("%d",&nw->data);
        if(head==NULL){
            head=temp=nw;
        }
        else{
            temp->link=nw;
            temp=nw;
        }
    }
}
void sort(){
    Node *t,*z;
    int temp;
    for(t = head; t != NULL; t = t->link){
        for(z = t->link; z != NULL; z = z->link){
            if(t->data > z->data){
                temp = t->data;
                t->data = z->data;
                z->data = temp;
            }
        }
    }
}
void display(){
    Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main(){
    create(5);
    sort();
    display();
}
