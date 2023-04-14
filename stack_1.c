#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int n;
    int top;
    int *arr;
};
int isemp(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->n - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack * ptr,int val){
    if(isFull(ptr)){
        printf("stack overflow! not possible\n");
    }
    else 
    ptr->top++;
    ptr->arr[ptr->top]=val;
}
int pop(struct stack * ptr){
    if(isemp(ptr)){
        printf("stack underflow!not possible\n");
        return -1;
    }
    else {
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
    }
}
int main()
{
    struct stack *s= (struct stack *)malloc(sizeof(struct stack));
    printf("enter the number of elements to be inserted in stack\n");
    scanf("%d",&s->n);
    s->top = -1;
    s->arr = (int *)malloc(s->n * sizeof(int));
    int ar;
    for (int i = 0; i < s->n; i++)
    {
        scanf("%d",&ar);
        push(s,ar);
    }
    for (int k = 0; k <s->n; k++)
    {
        printf("%d\t",s->arr[k]);
    }
    printf("\n");
    int pp;
    printf("enter how many elemets you want to pop");
    scanf("%d",&pp);
    for (int j = 1 ; j < pp; j++)
    {
        pop(s);
    }

    return 0;
}