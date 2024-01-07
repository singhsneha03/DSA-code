#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(node *&first){
    node *temp=first;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;    
    }
    cout<<endl;
}

void removedupli(node *&first){

    if( first == NULL){
        return;
        }
    if(first ->next == NULL){
        return;
    }

    node *curr=first;
    while(curr != NULL){
        if((curr != NULL) && (curr->data == curr->next->data)){
            node *temp=curr->next;
            curr->next=curr->next->next;

            //delete
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }

}

int main()
{
    node *first= new node(10);
    node *second= new node(20);
    node *third=new node(20);
    node *four=new node(30);
    node *five= new node(40);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    
    print(first);
    removedupli(first);
    print(first);

    return 0;
}