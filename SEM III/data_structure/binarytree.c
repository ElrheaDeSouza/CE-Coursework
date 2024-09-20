#include<stdio.h>
struct Node
{
    int data;
    struct Node *rchild;
    struct Node *lchild;
};
struct Node *root=NULL;

void insertnr()
{
    int x;
    printf("Enter element to insert: ");
    scanf("%d", &x);
    struct Node *tmp, *ptr, *pos;
    ptr=root;
    pos=NULL;
    while(ptr!=NULL){
        pos=ptr;
        if(x<ptr->data)
            ptr=ptr->lchild;
        else if(x>ptr->data)
            ptr=ptr->rchild;
        else{
            printf("element already present\n");
            return root;
        }
    }
    tmp=(struct Node*)malloc(sizeof(struct Node));
    tmp->data=x;
    tmp->lchild=NULL;
    tmp->rchild=NULL;
    if(pos==NULL)
        root=tmp;
    else if(x<pos->data)
        pos->lchild=tmp;
    else
        pos->rchild=tmp;
        return root;
}
struct Node *rinsert(struct Node*p, int x){
    if(p==NULL){
        p=(struct Node*)malloc(sizeof(struct Node));
        p->data=x;
        p->lchild=NULL;
        p->rchild=NULL;
    }
    else if(x<p->data)
        p->lchild=rinsert(p->lchild, x);
     else if(x>p->data)
        p->rchild=rinsert(p->rchild, x);
    else
        printf("Duplicate Key\n");
        return p;
}
struct Node *delchild(struct Node* n, int x){
    if(n==NULL)
        return n;

    if(n->data>x){
        n->lchild=delchild(n->lchild, x);
        return n;
    }
    else if(n->data<x){
        n->rchild=delchild(n->rchild, x);
        return n;
    }
    if (n->lchild == NULL) {
        struct Node* temp = n->rchild;
        free(n);
        return temp;
    }
    else if (n->rchild == NULL) {
        struct Node* temp = n->lchild;
        free(n);
        return temp;
    }
    else {

        struct Node* succ1 = n;
        struct Node* succ = n->rchild;
        while (succ->lchild!= NULL) {
            succ1 = succ;
            succ = succ->lchild;
        }
        if (succ1 != n)
            succ1->lchild = succ->rchild;
        else
            succ1->rchild = succ->rchild;

        n->data = succ->data;
        free(succ);
        return n;
    }
}

void InOrder(struct Node *root){
   if(root!=NULL){
    InOrder(root->lchild);
    printf(" %d ", root->data);
    InOrder(root->rchild);
   }
}
void PostOrder(struct Node *root){
    if(root==NULL)
        return;
    else
        PostOrder(root->lchild);
        PostOrder(root->rchild);
        printf(" %d ", root->data);
}
void PreOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    else{
        printf(" %d ", root->data);
        PreOrder(root->lchild);
        PreOrder(root->rchild);
    }
}
int main(){
    int a, x, y;
     printf("1.Insertion Without Recursion\n2.Insert using Recursion\n3.Deletion\n4.Inorder Traversal\n5.PreOrder Traversal\n6.PostOder Traversal\n7.Exit\n");
    while(1){
        printf("Enter choice: ");
        scanf("%d", &a);
        switch(a){
            case 1:
                insertnr();
                break;
            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &x);
                rinsert(root, x);
                break;
            case 3:
                printf("Enter element to insert: ");
                scanf("%d", &y);
                delchild(root, y);
                break;
            case 4:
                InOrder(root);
                break;
            case 5:
                PreOrder(root);
                break;
            case 6:
                PostOrder(root);
                break;
            case 7:
                exit(1);
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
}
