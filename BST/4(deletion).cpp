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

int findnode(node *root, int target){
    //base case
    if(root == NULL){
        return NULL;
    }
    if(target == root->data){
        return root;
    }
    if(target > root->data){
        return findnode(root->right,target);
    }
    else{
        return findnode(root->left,target);
    }  
}

node *delete(node *root, int target){

    if(root == NULL){
        return root;
    }

    if(root->data ==target){
        //iss node ko hi del karna
        // 4 cases

        if(root->left == NULL && root->right == NULL){
            //leaf node
            delete root;
            return NULL;
        }

        else if(root->left != NULL && root->right == NULL){
            node *child= root->left;
            delete root;
            return child;
        }

        else if(root->left == NULL && root->right != NULL){
            node *child= root->right;
            delete root;
            return child;
        }
        else
        {
            //find preorder pred
            int inorderpreccesor= max(root->left);

            //replace root data wid inorder pred
            root->data= inorderpreccesor;

            //delete inorder pred from left subtree
            root->left= delete(root->left, inorderpreccesor);
            return root;
        }
    }

    else if(target > root->data){
        root->right= delete(root->right,target);
    }

    else if(target < root->data){
        root->left= delete(root->left,target);
    }
    return root;
    
    // //1-SEARCH THE TARGET
    
    //2-DELETE

    //2.1- WHEN ITS LEAF NODE(R=NULL & L=NULL)
    //2.2- WHEN TEMP LEFT = NULL N RIGHT != NULL
    //2.3- WHEN TEMP LEFT != NULL & RIGHT == NULL 
    //2.4 WHEN LEFT & RIGHT != NULL
    

}

int main()
{
    return 0;
}