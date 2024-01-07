#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    //functions
    void push(int data){
        if(size-top >1){
            //space available n insert
            top++;
            arr[top]=data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            //stack empty
            cout<<"underflow"<<endl;
        }
        else{
            top --;
        }
    }

    int gettop(){
        if(top == -1){
            cout<<"stack empty"<<endl;
        }
        else{
            return arr[top];
        }

    }
    
    //returns no of valid element present in stack
    int getsize(){
        return top+1;
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    stack s(10);
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);

     while(!s.isempty()){
        cout<<s.gettop()<<" ";
        s.pop();
     }
    return 0;
}