#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,5,66,7};
    int n=6;
    int max= INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<< max;
}