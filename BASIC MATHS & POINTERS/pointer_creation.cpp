#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int a=5;
    //pointer creation
    int * ptr= &a;

    //access
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    //copy pointer
    int * ptr2= ptr;

    return 0;
}