#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a{1,2,3,4,5,6,1,2,4,5};
    vector<int>result;
    for(int i=0;i<a.size();i++)
    {   
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
        {
           result.push_back(a[i]);
           
            
        }
        
        }
        }

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }
    return 0;
}