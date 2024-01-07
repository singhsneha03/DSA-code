#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int pivotelement(vector<int>a)
{
    int start=0;
    int end=a.size()-1;
    int mid= start+ (end-start)/2;
    while(start<=end)
    {
        int ls_result=0;
        if(a[mid])
        {
            end=mid;
            ls_result=ls_result+end;
            end=end-1;
        }
        int rs_result=0;
        if(a[mid])
        {
            start= mid+1;
            rs_result=rs_result+start;
            start++;
        }
        if(ls_result==rs_result)
        {
            cout<<a[mid];
        }
    }
    return -1;
}
int main()
{
    vector<int> a{1,7,3,6,5};
    int result= pivotelement(a);
    cout<<pivotelement;
    return 0;
}