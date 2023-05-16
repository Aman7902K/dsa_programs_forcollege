#include <stdio.h>
#include <stdlib.h>
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
void preorder(struct node* ptr)
{
    if (ptr != NULL)
    {
        printf("%d ", ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder(struct node* ptr)
{
    if (ptr != NULL)
    {   preorder(ptr->left);
        preorder(ptr->right);
        printf("%d ", ptr->data);
    }
}

void inorder(struct node* ptr)
{
    if (ptr != NULL)
    {   preorder(ptr->left);
        printf("%d ", ptr->data);
        preorder(ptr->right);
    }
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
int main()
{
    struct node *p = createnode(64);
    struct node *p1 = createnode(54);
    struct node *p2 = createnode(72);
    struct node *p3 = createnode(44);
    struct node *p4 = createnode(63);
    struct node *p5 = createnode(84);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p3->left = p5;
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    printf("\n");
    printf("%d",isBST(p));
    return 0;
}

