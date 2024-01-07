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

void inot(node *root){
    if(root == NULL){
        return;
    }

    //LNR
    inot(root->left);
    cout<<root->data<<" ";
    inot(root->right);
}

void preot(node *root){
    if(root == NULL){
        return;
    }

    //NLR
    cout<<root->data<<" ";
    preot(root->left);
    preot(root->right);
}

void postot(node *root){
    if(root == NULL){
        return;
    }

    //NLR
    postot(root->left);
    postot(root->right);
    cout<<root->data<<" ";
}

int main()
{
    return 0;
}