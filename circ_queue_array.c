#include<stdio.h>
#include<stdlib.h>
struct cirqueue{
    int size;
    int front;
    int rear;
    int* ar;
};  
int isemp(struct cirqueue *q){
    if(q->front==q->rear){
        return 1;
    }
    return 0;
}
int isfull(struct cirqueue *q){
    if((q->rear+1)%q->size==q->front){
        return 1;
    }
    return 0;
}
void enqueue(struct cirqueue *q,int val){
    if(isfull(q)){
        printf("overflow!\n");
    }
    else{
        q->rear=(q->rear+1)%q->size; 
        q->ar[q->rear]=val;
        // printf("The inserted element is:%d\n",val);
    }
} 
void dequeue(struct cirqueue *q){
    int a=-1;
    if(isemp(q)){
        printf("underflow\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        a=q->ar[q->front];
        printf("the dequed element is %d\n",a);
    }
}
void display(struct cirqueue *q,int rn){
    printf("the resulant array is :\n");
    for(int i=rn;i<=q->rear;i++){
        printf("%d\t",q->ar[i]);
    }
}
int main()
{
    struct cirqueue q; 
    q.size=24;
    q.front=q.rear=-1;
    q.ar=(int*)malloc(q.size*sizeof(int));
    int el,i,o,rn;
    printf("enter the size of the array\n");
    scanf("%d",&o);
    printf("enter the elements to be inserted in cirqueue\n");
    for(i=0;i<o;i++){
    scanf("%d",&el);
    enqueue(&q,el);
    }
    printf("enter the range of elements which you want to delete\n");
    scanf("%d",&rn);
    for ( i = 0; i < rn; i++)
    {
        dequeue(&q);
    }
    display(&q,rn);
return 0;
}