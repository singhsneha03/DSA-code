//find unique no
#include<iostream>
#include <vector>
using namespace std;
int unique (vector<int>arr){
    int uni=0;
    for(int i=0; i<arr.size();i++){
        uni= uni^arr[i];
    }
    return uni;
}
int main()
{   
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<arr.size();i++){
        cin>>arr[i];
    }
    int result= unique(arr);
 cout<< result;
    return 0;
}