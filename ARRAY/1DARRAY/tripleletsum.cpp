#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4};
    int sum=6;

    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            for(int k=j+1; k<a.size();k++){
                if((a[i]+a[j]+a[k] == sum)){
                    cout<<a[i]<<a[j]<<a[k]<<endl;
                }
            }
        }
    }
    return 0;
}