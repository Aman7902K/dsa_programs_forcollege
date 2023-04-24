#include<stdio.h>
void main()
{
    int s,arr[43],new,dl_cn;
    printf("enter the size of the array\n");
    scanf("%d",&s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("original array\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nenter the integers to be deleted from array\n");
    scanf("%d",&dl_cn);
    // int j;
    while(dl_cn>0){
    s--;
    dl_cn--;
    }
    printf("array after deletion\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d ",arr[i]);
    }
    
}