//LINEAR SEARCH 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,34,5};
    int key=5;
   bool flag=0;
    for(int i=0; i<4;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
        
    }
    if (flag){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}