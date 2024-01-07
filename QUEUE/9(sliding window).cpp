#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

void solve(int arr[], int size, int k){
    deque<int> q;

    //process first window of size k

    for(int i=0; i<k; i++){
        if(arr[i] <0){
            q.push_back(i);
        }
    }

    //remaining window process karna

    for(int i=k; i<size; i++){
        //answer dedo purani window ka
        if(q.empty()){
            cout<<"empty"<<endl;
        }
        else{
            cout<<arr[q.front()];
        }
        //impo: remove out of window elements
        while( !q.empty() && i-q.front() >=k){
            q.pop_front();
        }

        //check curr elemnt for insertion
        while(arr[i]<0){
            q.push_back(i);
        }

        //answer print for last window
         if(q.empty()){
            cout<<"empty"<<endl;
        }
        else{
            cout<<arr[q.front()];
        }
    }
}
int main()
{
    int arr[]={12,-1,-1,8,-15,20,16,28};
    int size=8;
    int k=3;
    solve(arr,size,k);
     return 0;
}