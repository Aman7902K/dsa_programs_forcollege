#include<stdio.h>
void main()
{
    int s,arr[43],new;
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
    printf("\nenter the element to insert in array\n");
    scanf("%d",&new);
    arr[s]=new;
    printf("array after insertion\n");
    for (int i = 0; i < s+1; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    printf("array after deletion\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d",arr[i]);
    }
    
}