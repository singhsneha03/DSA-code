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

bool kth(node *root,int k, node *p){
    if(root == NULL){
        return false;
    }

    if(root ->data == p->data){
        return true;
    }
    if(k==0){
        return false;
    }
    bool leftans= kth(root->left,k,p);
    bool rightans=kth(root->right,k,p);

    //wapas aare hoge check left or right mein ans mila ki nahi
    if(leftans || rightans){
        k--;
    }
    if(k==0){
        cout<<root->data;
        k=-1;
    }
    return leftans || rightans;

}
int main()
{
    return 0;
}