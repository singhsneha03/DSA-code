#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;
void interleave(queue <int> &q){
    //seprate both halfs
    int n=q.size();
    int k=n/2;
    int count=0;
    queue <int>q2;

    while(!q.empty()){
        int temp= q.front();
        q.pop();
        q2.push(temp);
        count ++;

        if(count == k){
            break;
        }
    }

    //start interleaving
    while(!q.empty() && !q2.empty()){ 
        int first=q2.front();
        q2.pop();
        q.push(first);
        int second=q.front();
        q.pop();
        q.push(second);
    }
    //odd wala case
    if(n&1){
        int element=q.front();
        q.pop();
        q.push(element);
    }

}
int main()
{
    return 0;
}