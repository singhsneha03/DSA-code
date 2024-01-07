#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a{1,23,6,89,10,4,7,19};
    int n=a.size();

    for(int i=0;i<n-1; i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}