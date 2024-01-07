//intersection of two arr
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5};
    vector<int>b={2,3,4};
    vector<int>result;

    for(int i=0; i<a.size();i++){
        for(int j=0; j<b.size();j++){
            if(a[i]==b[j]){
                b[j]= INT_MIN;
                result.push_back(a[i]);
            }
        }
    }
    

    return 0;
}