#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
void insert(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }

    if(s.top() >= target){
        s.push(target);
        return;
    }

    int topele=s.top();
    s.pop();
    insert(s,target);

    s.push(topele);
}

void sort(stack<int> &s){
    if(s.empty()){
        return;
    }

    int topelement=s.top();
    s.pop();

    sort(s);
    insert(s,topelement);
}
int main()
{

    return 0;
}