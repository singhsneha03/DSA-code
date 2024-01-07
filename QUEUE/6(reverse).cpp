#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue <int> &t){
    stack <int> s;

    //1:put all element from queue to stack
    while(! t.empty()){
        int element= t.front();
        t.pop();

        s.push(element);
    }


    //2:put all element from queue to stack
    while(!s.empty()){
        int element= s.top();
        s.pop();
        t.push(element);
    }
}

void reverserec(queue <int>  &t){
    if(t.empty()){
        return;
    }

    int temp= t.front();
    t.pop();

    reverserec(t);

    t.push(temp);

}

int main()
{
    queue<int>t;
    t.push(1);
    t.push(2);
    t.push(3);
    t.push(4);
    t.push(5);

    reverse(t);

    while(!t.empty()){
        cout<<t.front();
        t.pop();
    }
    cout<<endl;

    return 0;
}