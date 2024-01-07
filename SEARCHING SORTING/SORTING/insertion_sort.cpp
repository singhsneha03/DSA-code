#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a{1,10,4,19,25,7,8,9};
    int n= a.size()-1;

    for(int i=1;i<n;i++)
    {
        //fetch
        int value= a[i];
        //compare
        
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>value)
            {
                //shift
                a[j+1]=a[j];
            }
            else
            {
                break;
            }  

        }
        //c0py
    a[j+1]= value;
    }
    ;

    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}