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

node *reverse(node *&head){
    node*prev=NULL;
    node *curr=head;
    node *next=curr->next;

    while(curr!= NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

node *solve(node *&head1,node *&head2 ){

    //1-reverse both ll
    head1=reverse(head1);
    head2=reverse(head2);


    //2-add
    node *anshead=NULL;
    node *anstail=NULL;

    //3-and ll reverse

}

int main()
{
    node *head1=new node(2);
    node *first=new node(4);
    head1->next=first;

    node *head2= new node(2);
    node *first2= new node(3);
    node *two2= new node(4);
    head2->next=first2;
    first2->next=two2;

    node *ans=solve(head1, head2);
    print(ans);

    return 0;
}