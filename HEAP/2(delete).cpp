#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(int data){
        size=0;
    }

    int del(){
        //replacing root node with last node
        int ans=arr[1];
        arr[1] = arr[size];
        size --;

        //placing it in correct position
        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;
            int largest=index;

            if(left<size && arr[largest]<arr[left]){
                largest =left;
            }
            if(right<size && arr[right]<arr[largest]){
                largest=right;
            }
            if(largest == index){
                break;
            }
            else{
                swap(arr[largest],arr[index]);
                index=largest;
            }

        }
        return ans;
    }
};

int main()
{
    return 0;
}