#include<stdio.h>
void read_array(int *arr,int s){
    int i;
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
}
void print_array(int *arr, int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int linear_search(int *arr,int key,int size){
    int pos,i;
    for (i = 0; i < size; i++)
    {
        if(arr[i]==key){
            pos = i;
        }
        else 
        return 0;
    }
    return pos;
}
int main()
{
int arr[56],s,x,se;
printf("enter the size of the array\n");
scanf("%d",&s);
read_array(arr,s);
print_array(arr,s);
printf("enter the element to be searched\n");
scanf("%d",&se);
x = linear_search(arr,se,s);
if(!x){printf("element not found\n");
}
else
printf("element found at %d index\n",x);
return 0;
}