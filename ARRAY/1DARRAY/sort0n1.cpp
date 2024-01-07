#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a={0,1,0,0,1,1,1,};
    int start=0;
    int end=a.size()-1;
    for(int i=0;i<end;){
        if(a[i]==0){
            swap(a[i],a[start]);
            i++;
            start++;
    }
        if(a[i]==1){
            swap(a[i],a[end]);
        
            end--;
    }
    
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    return 0;
}