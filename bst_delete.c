#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
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
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct node* ptr)
{
    if (ptr != NULL)
    {   inorder(ptr->left);
        printf("%d ", ptr->data);
        inorder(ptr->right);
    }
    printf("\n");
}
struct node* inpre(struct node *root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}
struct node * delete_node(struct node* root,int value){
    struct node* ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    if(value<root->data){
        root->left=delete_node(root->left,value);
    }
    else if(value>root->data){
        root->right=delete_node(root->right,value);
    }
    else{
        ipre=inpre(root);
        root->data=ipre->data;
        root->left=delete_node(root->left,ipre->data);
    }
    return root;
}

int main()
{
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(7);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);
    struct node *p5 = createnode(6);
    struct node *p6 = createnode(8);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    inorder(p);
    if(isBST(p)){
        printf("given tree is a binary tree\n");
    }
    else{
        printf("not a binary tree\n");
    }
    printf("\n");
    delete_node(p,3);
    inorder(p);
    return 0;
}