    #include<iostream>
    #include<vector>
    #include<limits.h>
    #include<algorithm>
    #include<string.h>
    #include<queue>
    using namespace std;
    
    class Queue{
        public:
        int *arr;
        int rear;
        int front;
        int size;

        Queue(int size){
            this ->size=size;
            arr= new int[size];
            front=0;
            rear=0;
        }

        void push(int data){
            if(rear == size){
                cout<<"full"<<endl;
            }
            else{
                arr[front]=data;
                rear++;
            }
        }

        void pop(){
            if(front == rear){
                cout<<"empty"<<endl;
            }
            else{
                arr[front]=-1;
                front++;
                if(front == rear){
                    front =0;
                    rear=0;
                }
            }
        }

        int getfront(){
            if(front == rear){
                return -1;
            }
            else{
                return arr[front];
            }
        }

        bool isempty(){
            if(front == rear){
                return true;
            }
            else{
                return false;
            }
        }
        int getsize(){
            return rear-front;
        }

    };
    int main()
    {
        queue<int> q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        q.push(65555550);


        return 0;
    }