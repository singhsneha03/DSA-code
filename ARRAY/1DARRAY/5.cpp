//vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(9);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}