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

int height(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftheight= height(root->left);
    int rightheight= height(root->right);
    int ans= max(leftheight, rightheight)+1;

    return ans;
}

int main()
{
    return 0;
}