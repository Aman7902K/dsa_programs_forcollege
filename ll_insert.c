#include <stdio.h>
#include <stdlib.h>
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
struct node *insertatbegin(struct node *head, int el)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = el;
    ptr->next = head;

    return ptr;
};
struct node *insertinbetween(struct node *head, int el, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    ptr->data = el;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    
    ptr->next = p->next;
    p->next = ptr;
    return head;
};
struct node *insertatend(struct node *head, int el)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = el;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertafternode(struct node *head, struct node *prevnode, int el)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = el;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
};
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
    traverse(head);
    printf("after insertion at begining\n");
    head = insertatbegin(head, 53);
    traverse(head);
    printf("enter the index after which you want to insert the element\n");
    scanf("%d", &in);
    printf("list after insertion at %d index\n", in);
    head = insertinbetween(head, 65, in);
    traverse(head);
    printf("list after insertion at end\n");
    head = insertatend(head, 53);
    traverse(head);
    printf("insertion after a given node\n");
    head = insertafternode(head, second, 4343);
    traverse(head);
    return 0;
}