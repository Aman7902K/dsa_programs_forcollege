#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int isemp(struct node* head){
    if(head==NULL){
        return 1;
    }
    return 0;
}
int isFull(struct node * head){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        return 1;
    }
    return 0;
}
struct node * push(struct node * head,int el){
    
    if(isFull(head))
    {
        printf("overflow\n");
    }
    else{
        struct node * ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=el;
        ptr->next=head;
        head=ptr;
        return head;
    }
}
struct node * pop(struct node * top){
    if(isemp(top)){
        printf("underflow\n");
    }
    else{
        struct node  * ptr = top;
        top=top->next;
        int x=ptr->data;
        free(ptr);
        return x;
    }
}
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node * top=NULL;     
    top=push(top,54);
    top=push(top,32);
    top=push(top,322);
    traverse(top);
    int x=pop(top);
    printf("%d",x);
return 0;
}