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
struct node * push(struct node** head,int el){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("overflow\n");
    }
    else{
        ptr->data=el;
        ptr->next=*head;
        *head=ptr;
        return *head;
    }
}
int pop(struct node** top){
    if(isemp(*top)){
        printf("underflow\n");
    }
    else{
        struct node  * ptr = *top;
        *top=(*top)->next;
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
    int i,n,el,x,m;
    printf("enter the no. of elements to be inserted in stack\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&el);
        top=push(&top,el);
    }
    printf("the stack is\n");

    traverse(top);
    scanf("%d",&m);

    for ( i = 0; i < m; i++)
    {
        x=pop(&top);
    }
    printf("stack after popping the element(s)\n");
    traverse(top);
return 0;
}
