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

int min(node*root){
    node *temp =root;
    if(root == NULL){
        return -1;
    }
    while(temp->left != NULL ){
        temp=temp->left;
    }
    return temp->data;
}

int max(node *root){
    node *temp=root;
    if(root == NULL){
        return false;
    }
    while(temp->right != NULL){
        temp= temp->right;
    }
    return temp->data;
}

int main()
{

    return 0;
}