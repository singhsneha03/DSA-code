#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int binarysearch(vector<int>a, int target)
{
    int start=0;
    int end=a.size()-1;
    int mid= start + (end-start)/2;

    while(start<=0)
    {
        if(a[mid]==target)
        return mid;

        if(mid-1>=start && a[mid-1]==target)
        return mid-1;

        if(mid+1<a.size() && a[mid+1]==target)
        return mid+1;

        if(target > a[mid])
        {
            //rs
            start=mid+2;
        }
        else{
            end=mid-2;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}
int main()
{
    vector<int> a{10,3,40,20,50,80,70};
    int target=40;

    int ans= binarysearch(a,target);

    cout<<"the value"<<" "<< target<< " is at index"<<ans<<endl;
    return 0;
}