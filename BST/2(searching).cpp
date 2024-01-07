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
bool findnode(node *root, int target){
    //base case
    if(root == NULL){
        return false;
    }
    if(target == root->data){
        return true;
    }
    if(target > root->data){
        return findnode(root->right,target);
    }
    else{
        return findnode(root->left,target);
    }

    
}
int main()
{
    return 0;
}