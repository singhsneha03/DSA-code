#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int solve(vector<int>a)
{
    int start=0;
    int end= a.size();
    int mid= start+(end-start)/2;
    while(start<=end)
    {
        if(start == end)
        {
            //sinle element
            return start;
        }

        //2 cases mid-even or mid-odd
        if(mid%2==0)
        {
            if(a[mid]==a[mid+1])
            {
                start= mid+2;
            }
            else
            {
                end=mid;
            }
        }
        else
        {
            if(a[mid]==a[mid-1])
            {
                start =mid+1;
            }
             else
            {
                end=mid-1;
            }
        }
        mid = start + (end-start)/2;
        
       

    }
    return -1;
}
int main()
{
    vector<int> a{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans= solve(a);
    cout<<"the elemet is:"<<a[ans]<<endl;
    return 0;
}