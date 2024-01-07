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

node *reverse(node *&head){
    node *prev=NULL;
    node *curr=head;
    node *forward= curr->next;

    while(curr != NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
    }
    return prev;
}

bool checkpali(node *&first){
    //EMPTY
    if(first == NULL){
        cout<<"empty"<<endl;
        return true;
    }

    //SINGLE NODE
    if(first->next==NULL){
        return true;
    }

    node *slow=first;
    node *fast=first;

    //1:CHECK MID
    while(first != NULL){
        fast->next=fast;
        while(fast != NULL){
            fast->next=fast;
            slow->next=slow;
        }
    }

    //2:REVERSE LL
    node *reversell= reverse(slow->next);
    slow->next= reversell;

    //3:start comparing
    node*temp1=first;
    node*temp2=reversell;

    while(temp2 != NULL){
        if( temp1->data != temp2->data){
            //not pali
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;


}
int main()
{
    node *first= new node(10);
    node *second= new node(20);
    node *third=new node(30);
    node *four=new node(10);
    node *five= new node(20);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;

    bool ispali=checkpali(first);

    if(ispali){
        cout<<"ll is pali"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}