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
    node*right;
    
    node(int data){
         this->data=data;
         left=NULL;
         right=NULL;
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

void lot(node *root)
{
    queue<node*>q;
    //intial
    q.push(root);

    while(!q.empty())
    {
    //a
    node *temp= q.front();

    //b
    q.pop();

    //c
    cout<<temp->data<<" ";

    //d
    if(temp->left)
    {
        q.push(temp->left);
    }

    if(temp->right)
    {
        q.push(temp->right);
    }
    }


}
int main()
{
    node *root=NULL;
    root=buildtree();
    lot(root);

    return 0;
}