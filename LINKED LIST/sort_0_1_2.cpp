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

node  *sort(node *&head){
    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        return;    }
    //CREATE DUMMY NODES
    node *zerohead= new node(-1);
    node *zerotail=zerohead;

    node *onehead=new node(-1);
    node *onetail=onehead;

    node *twohead= new node(-1);
    node *twotail=twohead;

    //TRAVERSE og LL
    node *curr=head;
    while(curr != NULL){
        if(curr->data==0){
            //take out zero node
            node *temp=curr;
            curr=curr->next;
            temp->next =NULL;

            //append zero in zerohead
            zerotail->next=temp;
            zerotail=temp;
        }

        else if(curr->data==1){
            node *temp=curr;
            curr=curr->next;
            temp=NULL;

            onetail->next=temp;
            zerotail=temp;

        }

        else if(curr->data==2){
            node *temp=curr;
            curr=curr->next;
            temp=NULL;

            twotail->next=temp;
            twotail=temp; 

        }

        //join them

        //remove dummy nodes

        //modify one list
        node *temp=onehead;
        onehead=onehead->next;
        temp->next=NULL;
        delete temp;

        //modify two list
        node *temp=twohead;
        twohead=twohead->next;
        temp->next=NULL;
        delete temp;

        if(onehead != NULL){
            zerotail->next=onehead;
            if(twohead != NULL){
                onetail->next=twohead;
            }
        }
        else{
            if (twohead!=NULL){
                zerotail->next=twohead;}
        }

        node *temp=zerohead;
        zerohead=zerohead->next;
        temp->next=NULL;
        delete temp;

        return zerohead;


        //return head of modified ll

    }

}
int main()
{
    node *head= new node(1);
    node *second= new node(2);
    node *third= new node(0);
    node *fourth= new node(2);
    node *five= new node(2);
    node *six= new node(0);
    node *seven= new node(1);
    node *eight= new node(1);
    node *nine= new node(1);

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