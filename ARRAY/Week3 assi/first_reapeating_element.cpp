#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a{2,3,4,5,1,2,3,4};
    vector<int>r;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
               r.push_back(a[i]);
            }
        }
        break;
        
    }
    for(int i=0; i<r.size();i++)
    {
        cout<<r[i];
    }
    return 0;
}