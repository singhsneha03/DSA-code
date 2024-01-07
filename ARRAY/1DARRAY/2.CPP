//COUNTING 0 AND 1
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0,0,1,1,0,1};
    int zero=0;
     int one=0;
    for(int i=0;  i<9; i++){
        if(arr[i]==0){
            
            zero++;
            
        }
        if(arr[i]==1){
           
            one++;
            
        }
    }
    cout<<zero;
    cout<<one;
}