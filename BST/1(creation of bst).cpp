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

node *insertintobt(node *root,int data){
    //this is the first node v have to create
    if(root== NULL){
        root=new node(data);
        return root;
    }

    //now the first node
    if(root->data >data){
        //insert into left
        root->left=insertintobt(root->left,data);
    }
    else{
        root->right=insertintobt(root->right,data);
    }
    return root;
}
void lot(node *root){
    queue <node *>q;
    //intially
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //A
        node *temp=q.front();

        //B
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
            q.push(NULL);}
        }
        

        //C
        else{
            cout<<temp->data<<endl;

        //D
        if(temp ->left){
            q.push(temp ->left);
        }

        if(temp ->right){
            q.push(temp ->right);
        }
             
        }  
    }

}
void input(node * &root){
    int data;
    cin>>data;
    while(data != -1){
        root= insertintobt(root,data);
        cin>>data;
    }  
}

int main()
{
    node *root=NULL;
    cout<<"take input"<<endl;
    input(root);
    lot(root); 
    return 0;
}