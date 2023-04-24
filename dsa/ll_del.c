#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deletefirst(struct node *head)
{
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node *deleteinbetween(struct node *head,int index)
{
    struct node* p=head;
    struct node* q=head->next;
    int i=1;
    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node * delete_end(struct node*head)
{
    struct node *p=head;
    struct node *q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}
struct node * delete_value(struct node*head,int value)
{
    struct node* p=head;
    struct node*q=p->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    p->next=q->next;
    free(q);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    int in;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 43;
    head->next = second;
    second->data = 76;
    second->next = third;
    third->data = 32;
    third->next = fourth;
    fourth->data=54;
    fourth->next=NULL;
    printf("list before deletion\n");
    traverse(head);
    printf("list after deleting\n");
    // head=deletefirst(head);
    // head=deleteinbetween(head,2);
    // head=delete_end(head);
    // head=delete_value(head,76);
    traverse(head);
}