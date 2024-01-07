#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue <int> &q, int k){
    
    stack <int> s;
    int count=0;
    int n=q.size();

    if(k<=0 || k>n){
        return;
    }

    //removing frm queue k element
    while(! q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k){
            break;
        }
    }

    //pushing in stack k elemnt
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }

    //push n-k elements from queue start to back
    count =0;
    while(!q.empty() && n-k !=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
    }


}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int k;

    reverse(q,k);
    return 0;
}