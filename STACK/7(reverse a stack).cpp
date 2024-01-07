#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;

void solve(stack<int> &s, int target){
    //basecase
    if(s.empty()){
        s.push(target);
        return;
    }

    int topelement=s.top();
    s.pop();

    //recursive call
    solve(s,target);

    //backtracking
    s.push(topelement); 

}
void insertatbottom(stack <int>&s){
    if(s.empty()){
        cout<<"empty"<<endl;
        return;
    }

    int target=s.top();
    solve(s,target);
}

void reverse(stack<int>&s){

    if(s.empty()){
        return;
    }

    int target=s.top();
    s.pop();

    reverse(s);

    insertatbottom(s,target);


}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverse(s);
    return 0;
}