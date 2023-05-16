#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};
void enque(int el)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->data = el;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
void deque()
{
    int x;
    if (f == r)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *n = f;
        x = n->data;
        printf("\nDequeued element is: %d\n", x);
        f = f->next;
        free(n);
    }
}
void trav(struct node *q)
{
    while (q != NULL)
    {
        printf("%d ", q->data);
        q = q->next;
    }
}
int main()
{
    struct node q;
    enque(43);
    enque(34);
    enque(67);
    trav(f);
    deque(f);
    trav(f);
    return 0;
}