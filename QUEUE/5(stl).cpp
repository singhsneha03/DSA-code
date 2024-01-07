#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
int main()
{
    deque<int>q;
    q.push_front(1);
    q.push_front(2);
    q.push_back(3);
    q.push_back(4);

    cout<<q.size();

    q.pop_front();
    q.pop_back();

    if(q.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }


    return 0;
}