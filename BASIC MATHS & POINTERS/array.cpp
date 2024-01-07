#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int a[5]={1,9,3,4,5};

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<a[0]<<endl;
    cout<<&a[0]<<endl;

    cout<<*a<<endl;
    cout<<*a+1<<endl;
    cout<<*(a)+1<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;

    //char
    char ch[10]= "sneha";
    char *c= ch;
    cout<<c<<endl;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;


    return 0;
}