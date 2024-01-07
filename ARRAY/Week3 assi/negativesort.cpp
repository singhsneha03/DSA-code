#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int> a{5,-2,3-4,5,3,7,-5};
  
    int i=0, j=a.size()-1;
    for(int k=0; k<a.size()&&i<j;k++)
    {
        if(a[k]<0)
        {
            swap(a[i],a[k]);
            i++;
        }
        if(a[k]>0)
        {
            swap(a[j],a[k]);
            j--;
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}