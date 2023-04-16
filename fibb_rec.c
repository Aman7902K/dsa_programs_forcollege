#include<stdio.h>
int fibb(int a){
    if (a<=1)
    {
        return a;
    }
    else{
    return fibb(a-1) + fibb(a-2);
    }
}
int main()
{
    int a;
    printf("enter the number upto which fibonacci series is to be generated\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("%d ",fibb(i));    
    }   
return 0;
}






