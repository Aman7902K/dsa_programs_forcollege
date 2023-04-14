#include <stdio.h>
#include <stdlib.h>
// #include "treetrav.h"
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int isBST(struct node* ptr){
    static struct node *prev=NULL;
    if(ptr!=NULL){
        if(!isBST(ptr->left)){
            return 0;
        }
        if(prev!=NULL && ptr->data<=prev->data){
            return 0;
        }
        prev=ptr;
        return isBST(ptr->right);
    }
    else{
        return 1;
    }
}

void postorder(struct node* ptr)
{
    if (ptr != NULL)
    {   postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ", ptr->data);
    }
}


void preorder(struct node* ptr)
{
    if (ptr != NULL)
    {
        printf("%d ", ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void inorder(struct node* ptr)
{
    if (ptr != NULL)
    {   inorder(ptr->left);
        printf("%d ", ptr->data);
        inorder(ptr->right);
    }
}
int main()
{
    struct node *p = createnode(64);
    struct node *p1 = createnode(54);//p left
    struct node *p2 = createnode(72);// p right
    struct node *p3 = createnode(44);// p1 left
    struct node *p4 = createnode(63);// p1 right
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // preorder(p);
    // printf("\n");
    // postorder(p);
    // printf("\n");
    preorder(p);
    printf("\n");
    inorder(p);
    printf("\n");
    postorder(p);
    // printf("%d",isBST(p));
    return 0;
}

