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

    node(){
        this -> data =0;
        this ->next=NULL;
    }
    node(int data){
        this ->data= data;
        this ->next= NULL;
    }

};
void print(node * &first){
    node *temp = first;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void insertathead(node *&first, int data)
{
     //create a new node
    node* newnode= new node(data);
    newnode ->next=first;
    first= new node;
}

void insertattail(node *&five, int data)
{
    node *newnode=new node(data);
    five->next=newnode;
    five=newnode;
}

void insertatposi(int data,int position, int *&head, int *&tail){
    if(head == NULL){
    node *newnode= new node(data);
    head=newnode;
    tail=newnode;
    return
    }
    int i=1;
    node *prev=head;
    while(i<position){
        prev=prev ->next;
        i++;
    }
    node *curr=prev->next;

    node *newnode= new node(data);

    newnode->next=curr;

    prev ->next=newnode;


}

void deleteNode(int position, Node* &head, Node* &tail) {
        if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }

        //deleting first node
        if(position == 1) {
                Node* temp = head;
                head = head -> next;
                temp -> next = NULL;
                delete temp;
                return;
        }
        int len  = findLength(head);


        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                Node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                Node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
        }

        //deleting middle node

        //step  : find prev and curr
        int i =1;
        Node* prev = head;
        while( i < position-1) {
                prev= prev -> next;
                i++;
        }
        Node* curr = prev -> next;

        //step2:
        prev -> next = curr -> next;
        //step3:
        curr -> next = NULL;
        //step4:
        delete curr;

}



int main()
{
    //node *head= new node();
    node *first=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    node *five=new node();

    first->next=second;
    second ->next=third;
    third ->next=fourth;
    fourth ->next=five;
    five ->next=NULL;

    print(first);
    return 0;
} 