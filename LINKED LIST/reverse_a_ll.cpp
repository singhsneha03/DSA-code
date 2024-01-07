#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
node *reverse(node *&prev, node *&curr){
    if(curr == NULL){
        //LL IS REVERSED
        return prev;
    }
    //RECURSION
    node *forward= curr->next;
    curr->next=prev;

    reverse(curr,forward); //shift hojayega na pointers so
}
int main()
{
    node *prev=NULL;
    node *curr=head;
    head=reverse(prev,curr);
    cout<<endl;
    print(head);
    cout<<endl;
    return 0;
}