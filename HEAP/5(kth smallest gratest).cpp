#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

int solvegreat(int arr[], int n, int k){
    priority_queue <int, vector<int>, greater<int> > pq;
     //insert k elements of array
    for(int i=0; i,k; i++){
        pq.push(arr[i]);
    }

    //for remmaining elements insert after comparing only
    for(int i=k; i<n; i++){
        int element=arr[i];
        if(element > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans=pq.top();
    return ans;
}

int solvemin (int arr[], int n, int k){
    //create max heap
    priority_queue <int> pq;

    //insert k elements of array
    for(int i=0; i,k; i++){
        pq.push(arr[i]);
    }

    //for remmaining elements insert after comparing only
    for(int i=k; i<n; i++){
        int element=arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans=pq.top();
    return ans;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int k=4;
    int ans= solvemin(arr,n,k);
    return 0;
}