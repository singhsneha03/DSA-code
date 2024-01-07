#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
    
    node(int data)
    {
        this->data=data;
        left= NULL;
        right= NULL;
    }
};

node *buildtree()
{
    int data;
    cout<<"enter d data"<<endl;
    cin>>data;
    
    if (data == -1)
    {
        return NULL;
    }
    
    //step a,b,c
    
    node *root= new node(data);
    
    cout<<"enter data for left"<<data<<"node"<<endl;
    root->left=buildtree();
    
    cout<<"enter data for right"<<data<<"node"<<endl;
    root->right=buildtree();
    
    return root;
    
}

int main()
{
    node *root= NULL;
    root=buildtree();

    return 0;
}
