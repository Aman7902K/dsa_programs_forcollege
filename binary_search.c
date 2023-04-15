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
int binary_search(int arr[] ,int n,int el){
    int l=0;
    int r=n-1;
    int mid,mid_val;
    while(l<=r){
        mid = l+(r-l)/2;
        mid_val=arr[mid];
        if(el==mid_val){
            return mid;
        }
        else if(el>mid_val){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;
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
x = binary_search(arr,s,se);
if(!x){
    printf("element not found");
}
else
    printf("element found at index %d\n",x);
return 0;
}
