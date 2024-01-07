#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

bool check(node *head){
    unordered_map<node*, bool>a;
    node *temp=head;

    while(temp != NULL){
        if(a.find(temp) != a.end()){
            a[temp]=true;
        }
        else{
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    return 0;
}