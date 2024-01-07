#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;

    node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }

    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node(){
        cout<<"node with:"<<this->data<<"deleted"<<endl;
    }
    void print(node *head){
        node *temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;        }
    }
    int length(node *head){
        int len=0;
        node *temp=head;
        while(temp != NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }

    void insertathead( int data , node *&head, node *&tail){
         if(head == NULL){
            node *newnode= new node(data);
            head= newnode;
            tail=newnode;
            return;
         }
         else{
            node *newnode=new node(data);
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
         }
    }

    void insertattail(int data, node *&head,node *&tail)
    {
        if(head == NULL){
            node *newnode=new node(data);
            head=newnode;
            tail=newnode;
            return;}
        else{
            node *newnode= new node(data);
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;

        } 
    }

    void insertatmid(int data, node*&head, node *&tail,int position){
        if (head == NULL){
            node *newnode= new node(data);
            head=newnode;
            tail=newnode;
            return;
        }
        else{
            if(position ==1){
                insertathead(data,head,tail);
                return;
            }
            int len=length(head);
            if(position>len){
                insertattail(data,head,tail);
                return;
            }
            int i=1;
            node *prevnode=head;
            while(i<position-1){
                prevnode=prevnode->next;
                i++;
            }
            node *curr=prevnode->next;

            node *newnode=new node(data);
            prevnode->next=newnode;
            newnode->prev=prevnode;
            curr->prev=newnode;
            newnode->next=curr;

        }
    }
    void delfrmposition(int position,node *&head, node *&tail){
        if (head == NULL){
            cout<<"empty"<<endl;
        }
        if(head->next== NULL){
            //SINGLE NODE
            node *temp=head;
            head=NULL;
            tail=NULL;
            delete temp;
            return;
        }
        
        //DELETE FIRST NODE
        if (position==1){
            node *temp=head;
            head=head->next;
            head->prev=NULL;
            temp->next=NULL;
            delete temp;
            return;
        }
        int len=length(head);
        if(position>len){
            cout<<"enter valid posi"<<endl;
        }
        //DELETE FROM TAIL
        if (position==len){
            node *temp=tail;
            tail=temp->prev;
            temp->prev=NULL;
            tail->next=NULL;
            delete temp;
            return;

        }
        //DELETE FROM MID
        int i=1;
        node *left=head;
        while(i<position-1){
            left=left->next;
            i++;
        }
        node *curr=left->next;
        node *right=curr->next;

        left->next=right;
        right->prev=left;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
        return;
    }      
};
int main()
{
    return 0;
}