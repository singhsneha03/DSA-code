#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> a{1,3,6,2,8,53,3,4};
    int n=a.size();
    //outer loop (n-1) rounds
    for(int i=0; i<n-1; i++)
    {
        int minindex=i;
        //inner loop i to n 
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[minindex])
            {
                //new min den store
                minindex=j;
            }
        }
        //swap
        swap( a[i], a[minindex]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}