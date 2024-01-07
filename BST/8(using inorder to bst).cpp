#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node *bst(int inorder [], int s, int e){
    if(s>e){
        return NULL;
    }
    int mid= s+(e-s)/2;
     int element= inorder[mid];
     node *root= new node (element);

    root->left= bst(inorder,s,mid-1);
    root->right= bst(inorder,mid+1,e);

    return root;

    }
int main()
{
    return 0;
}