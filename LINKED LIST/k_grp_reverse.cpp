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
int getlength(node *&head){
    int len=0;
    node *temp=head;
    while(temp != NULL){
        temp=temp->next;
        len++;
        }
    return len;
}
node *reverse(node *&head , int k){
    if(head == NULL){
        return NULL;
    }

    int len= getlength(head);
    if(k>len){
        cout<<"eneter valid value"<<endl;
        return head;
    }

    node *prev=NULL;
    node *curr=head;
    node *forward=curr->next;
    int count =0;

    while(count < k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    if(forward != NULL){
        head->next= reverse(forward, k);

    }
    return prev;

}
void print(node *&head){
    node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

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

    int k=3;
    head=reverse(head,k);
    print(head);


    return 0;
}