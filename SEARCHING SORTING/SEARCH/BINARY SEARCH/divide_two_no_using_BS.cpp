#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int divide(int dividend, int divisor)
{
    int start=0;
    int end=abs(dividend);
    int mid= start+ (end-start)/2;
    int ans=1;

    while(start<=end)
    {
        //perfect ans
        if(abs(mid*divisor)==abs(dividend))
        ans=mid;
        break;

        if(abs(mid*divisor)>abs(dividend))
        {
        //ls
        end=mid-1;
        }

        else
        {
            ans=mid;
            start=mid+1;
        }
        mid= start + (end-start)/2;
    }

        if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
        {
            return ans;
        }
        else
        {
            return -ans;
        }
    }

int main()
{
    int dividend=100;
    int divisor=5;

    int ans= divide(dividend,divisor);

    cout<<"the ans is: "<<ans<<endl;

    return 0;
}