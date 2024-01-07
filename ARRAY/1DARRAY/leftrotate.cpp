#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5};
    int sizea=5;
    int j=a.size()-1;
    while(j>0){
        swap(a[0],a[j]);
        j--;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
        return 0;
}