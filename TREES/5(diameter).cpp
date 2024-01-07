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

int diam(node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int opt1= diam(root->left);
    int opt2=diam(root->right);
    int opt3=height(root->left)+ height(root->right);
    int ans= max(opt1,max(opt2, opt3));

    return ans;
}

int main()
{
    return 0;
}