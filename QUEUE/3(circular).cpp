#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;

class cirq{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    cirq(int size){
        this->size=size;
        arr=new int[size];
        front =-1;
        rear=-1; 
    }

    void push(int data){
        //QUEUE FULL
        if(front ==0 && rear== size-1 ){
            cout<<"full"<<endl;
        }

        //SINGLE ELEMENT
        else if(front =-1){
            front=rear=0;
            arr[rear]=data;
        }

        //CIRCULAR NATURE

        else if(front == -1 && rear == size-1){
            rear=0;
            arr[rear]=data;
        }

        //NORMAL INSERT
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void pop(){
        //EMPTY CHECK
        if (front ==-1){
            cout<<"empty";
        }

        //SINGLE ELEMENT
        else if(front == rear){
            arr[front]=1;
            front=-1;
            rear=-1;
        }

        //CIRCULAR NATURE
        else if(front == size -1){
            front=0;
        }

        //NORMAL DEL
        else{
            front ++;
        }
    }
};
int main()
{
    return 0;
}