#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<a[0]<<endl;
    cout<<&a[0]<<endl;

    cout<<*a<<endl;
    cout<<*a+1<<endl;
    cout<<*(a)+1<<endl;
    cout<<*(a+1)<<endl;

    return 0;
}