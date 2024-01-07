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

void sort(node *&head){
    //STEP 1- REMOVE COUNT
    int  zero=0;
    int one=0;
    int two=0;

    node *temp=head;
    while(temp != NULL){
        if(temp ->data == 0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data==2){
            two++;
        }
        temp=temp->next;

    }

    //STEP 2- FILL 0 1 2 IN OG LL
    temp=head;
        //fill 0
        while(zero--){
            temp->data=0;
            temp=temp->next;
        }
        //fill 1
        while(one--){
            temp->data=0;
            temp=temp->next;
        }

        //fill 2
        while(two--){
            temp->data=2;
            temp=temp->next;
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

    print(head);
    sort(head);
    return 0;
}