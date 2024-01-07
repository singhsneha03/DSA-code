#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int> a{2,2,0,2,1,1,0};
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
        }
    }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
    return 0;
}
