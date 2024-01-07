#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int lastocc(vector<int>a, int search)
{
    int start=0;
    int end=a.size()-1;
    int mid= start+(end-start)/2;
    int store=-1;
    while(start<=end)
    {
        if(a[mid]==search)
        {
            store=mid;
            //right search
            start=mid+1;   
        }
        else if(search>mid)
        {
            //right search
            start=mid+1;
        }
        else if(search<mid)
        {
            //left search
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return store;
}
int main()
{
    vector<int> a{1,2,3,4,4,5,6,6,6,6,6,7};
    int search=6;
    int result= lastocc(a,search);
    cout<<"last occ is at"<<" "<<result;
    return 0;
}