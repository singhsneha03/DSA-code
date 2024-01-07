#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int fib(int n)
{
    // base case
    if(n==1)
    //first term
    return 0;

    if(n==2)
    //second term
    return 1;

    int solve=fib(n-1)+fib(n-2);
    return solve;
}
int main()
{
    int n;
    cout<<"enter the term u want to see:"<<endl;
    cin>>n;
    int ans=fib(n);
    cout<<n<<"the term is: "<<ans<<endl;
    return 0;
}