#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int sqroot(float n)
{
    int start=0;
    int end=n;
    int mid= start+ (end-start)/2;
    int search=n;
}
int main()
{
    float n;
    cout<<"enter the no:";
    cin>>n;
    int ans= sqroot(n);
    cout<<"the ans is:"<<ans<<endl;

    return 0;
}