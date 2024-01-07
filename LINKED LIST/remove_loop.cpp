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

node *removeloop(node *&head){
    if(head == NULL){
        cout<<"empty"<<endl;
        return NULL;
    }
    
    node *slow=head;
    node *fast=head;
    while(slow != NULL && fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(slow == fast){
            //LOOP IS PRESENT
            slow = head;
            break;
        }
    }
    node *prev=fast;
    while(slow != fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
    return slow;
    //return fast;

}

int main()
{
    node *head= new node(10);
    node *second= new node(20);
    node *third= new node(30);
    node *fourth= new node(40);
    node *five= new node(50);
    node *six= new node(60);
    node *seven= new node(70);
    node *eight= new node(80);
    node *nine= new node(90);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=five;

    return 0;
}