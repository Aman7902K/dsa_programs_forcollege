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
void insert(struct node *root,int key){
    struct node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("element already exists\n");
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node* n=createnode(key);
     if(key<prev->data){
        prev->left=n;
     }
     else{
        prev->right=n;
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
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inorder(p);
    // insert(p, 7);
    // insert(p,8);
    insert(p,2);
    printf("\n");
    inorder(p);
    printf("%d", p->left->left->right->data);
    // printf("%d",p->left->data);
    return 0;
}