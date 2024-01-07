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
void print(node *&head){
        node *temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next; 
        }
        cout<<endl;
}

node *getmid(node *&head){
    if(head == NULL){
        cout<<"EMPTY"<<endl;
        return head;
    }
    if(head->next==NULL){
        //SINGLE NODE
        return head;
    }

    //LL > ONE NODE
    node *slow=head;
    node*fast=head;
    //node *fats=head->next; (if u want 30 ans for even)
    while(slow != NULL && fast !=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;


}

int main()
{
    node *head= new node(10);
    node *second= new node(20);
    node *third= new node(30);
    node *fourth= new node(40);
    node *five= new node(50);
    node *tail= new node(60);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;
    five->next=tail;
    tail->next=NULL;

    print(head);

    cout<<getmid(head)->data<<endl;

    return 0;
}