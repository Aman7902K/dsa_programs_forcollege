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
void selectionSort(int* a,int n){
    int min,pos,temp;
    for (int  k = 0; k < n-1; k++)
    {
        min=a[k];
        pos=k;
        for (int i = k+1; i <=n;  i++)
        {
            if(min>a[i]){
                min=a[i];
                pos=i;
            }
        }
        if(pos!=a[k]){
            temp=a[k];
            a[k]=a[pos];
            a[pos]=temp;
        }
    }
}
void insertion_sort(int* a,int n){
    int key,j,i;
    for (i = 1; i <= n-1; i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void bubblesort(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("finished at pass no. %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int arr[46],n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    read_array(arr,n);
    printf("original array\n");
    print_array(arr,n);
    selectionSort(arr,n);
    printf("sorted array\n");
    print_array(arr,n);
return 0;
}