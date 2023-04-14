#include<stdio.h>
void read_array(int *arr,int s){
    int i;
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
}
void print_array(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int partition(int *a,int low,int high){
    int pivot=a[low],temp;
    int i=low+1;
    int j=high;
    do{
    while (a[i]<=pivot)
    {
        i++;
    }
    while (a[j]>pivot)
    {
        j--;
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }while(i<j);
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void quick_sort(int *a,int low,int high){
int partitionindex;
if(low<high){    
    partitionindex=partition(a,low,high);
    quick_sort(a,low,partitionindex-1);
    quick_sort(a,partitionindex+1,high);
}
}
int main()
{
    int a[54];
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    read_array(a,n);
    printf("original array\n");
    print_array(a,n);
    quick_sort(a,0,n-1);
    printf("sorted array\n");
    print_array(a,n);
return 0;
}