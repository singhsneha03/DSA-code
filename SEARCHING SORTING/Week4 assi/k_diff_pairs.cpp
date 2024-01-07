#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a{3,1,4,1,5};
    int key =1;

    for(int i=0; i<a.size(); i++)
    {
        for(int j=i+1; j<a.size(); j++)
        {
            int diff= abs(a[i]-a[j]);
            if(diff == key)
            {
                cout<<abs(a[i])<<","<<abs(a[j])<<endl;
            }
        }
    }
    return 0;
}