#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;

void printmid(stack<int>&s, int &totsize){
    if(s.size() == 0){
        cout<<"empty";
        return;
    }
    //base case
    if(s.size() == totsize/2+1){
        cout<<"mid"<<s.top()<<endl;
        return;
    }

    int temp=s.top();
    s.pop();

    //recursive call
    printmid(s,totsize);

    //backtracking
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int totsize=s.size();

    printmid(s,totsize);
    return 0;
}