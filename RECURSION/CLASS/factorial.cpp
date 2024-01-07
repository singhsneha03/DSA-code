#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int factorial(int n)
{
    if(n == 1)
    return 1;
    cout<<"the call is as-"<<n<<endl;
    int solve= n* factorial(n-1);
    return solve;
}
int main()
{
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;

    int ans= factorial(n);
    cout<<ans<<endl;

    return 0;
}