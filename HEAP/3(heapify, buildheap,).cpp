#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

void heapify(int arr[],int n,int i){
    int index=i;
    int left=2*index;
    int right=2*index+1;
    int largest=index;

    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[right]<arr[largest]){
        largest=right;
    }
    if(index != largest){
        // left or right mein se koi greater hogaya current node se
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,n,i);
    }
}

void buildheap(int arr[],int n){
    for(int i=n/2; i>0;i--){
        heapify(arr,n,i);
    }
}

void heapsort(int arr[],int n){
    int index=n;
    while(n != 1){
        swap(arr[1],arr[index]);
        n--;
        heapify(arr,n,index);
    }
}
int main()
{
    return 0;
}