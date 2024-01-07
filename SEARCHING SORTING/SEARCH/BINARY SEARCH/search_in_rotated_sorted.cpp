#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int pivotelement(vector<int>a)
{
    int start=0;
    int end=a.size()-1;
    int mid= start+(end-start)/2;
    while(start <= end)
    {
        if(mid+1 <a.size() && a[mid]>a[mid+1])
            return mid;

        if(mid -1 >=0 && a[mid-1]>a[mid])
            return mid-1;

        if(a[start]>a[mid])
            //left search
            end=mid-1;

        if(a[start]<a[mid])
            //right search
            start=mid+1;

        mid= start+(end - start)/2;
    }
    return -1;
}
int main()
{
    return 0;
}