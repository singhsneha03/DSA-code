#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a{20,60};
    vector<int>b{20,30,40,60};
    vector<int>c{20,60,70,80,90};
    vector<int>d;
    vector<int>r;

    for(int i=0;i<a.size();i++)
    {
        d.push_back(a[i]);
    }

    for(int i=0;i<b.size();i++)
    {
        d.push_back(b[i]);
    }

    for(int i=0;i<c.size();i++)
    {
        d.push_back(c[i]);
    }

    // for(int i=0;i<d.size();i++)
    // {
    //     cout<<d[i]<<" ";
    // }

    for(int i=0;i<d.size();i++)
    {
        int count=0;
        for(int j=i+1;j<d.size();j++)
        {
            if(d[i]==d[j])
            {
                count++;
                if(count==2)
                {
                r.push_back(d[i]);
                }
            }
        
        }
    }

    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }



    return 0;
}