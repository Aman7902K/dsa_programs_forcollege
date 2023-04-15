#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int* ar;
};  
int isemp(struct queue *q){
    if(q->front==q->rear){
        return 1;
    }
    return 0;
}
int isfull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("overflow!\n");
    }
    else{
        q->rear++;
        q->ar[q->rear]=val;
        // printf("The inserted element is:%d\n",val);
    }
} 
void dequeue(struct queue *q){
    int a=-1;
    if(isemp(q)){
        printf("underflow\n");
    }
    else{
        q->front++;
        a=q->ar[q->front];
        printf("the dequed element is %d\n",a);
    }
    
}
void display(struct queue *q,int rn){
    printf("the resulant array is :\n");
    for(int i=rn;i<=q->rear;i++){
        printf("%d",q->ar[i]);
    }
}
int main()
{
    struct queue q; 
    q.size=24;
    q.front=q.rear=-1;
    q.ar=(int*)malloc(q.size*sizeof(int));
    int el,i,o;
    printf("enter the size of the array\n");
    scanf("%d",&o);
    printf("enter the elements to be inserted in queue\n");
    for(i=0;i<o;i++){
    scanf("%d",&el);
    enqueue(&q,el);
    }
    printf("enter the range of elements which you want to delete\n");
    scanf("%d",&o);
    for ( i = 0; i < o; i++)
    {
        dequeue(&q);
    }
    display(&q,o);
return 0;
}