#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
class deq{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    deq(int size){
        this ->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void pushrear (int data){
        //QUEUE FULL
        if(front ==0 && rear== size-1 ){
            cout<<"full"<<endl;
            return;
        }

        //SINGLE ELEMENT
        else if(front =-1){
            front=rear=0;
            // same line arr[rear]=data;
        }

        //CIRCULAR NATURE

        else if(front == -1 && rear == size-1){
            rear=0;
            //arr[rear]=data;
        }

        //NORMAL INSERT
        else{
            rear++;
            //arr[rear]=data;
        }
        arr[rear]=data;
    }

    void pushfront(int data){
        //QUEUE FULL
        if(front ==0 && rear== size-1 ){
            cout<<"full"<<endl;
            return;
        }

        //SINGLE ELEMENT
        else if(front =-1){
            front=rear=0;
            arr[front]=data;
        }

        //CIRCULAR NATURE

        else if(front == 0 && rear != size-1){
            front=size-1;
            arr[front]=data;
        }

        //NORMAL INSERT
        else{
            rear++;
            arr[front]=data;
        }
    }
    void popfront(){
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
        else if(rear ==0){
            rear =size-1;
        }

        //NORMAL DEL
        else{
            rear --;
        } 
    }
    void poprear(){

    }


};
int main()
{
    return 0;
}