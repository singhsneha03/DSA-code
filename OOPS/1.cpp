#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

void reverse(string &a)
{
    int n=a.length();
    for(int i=0; i<n/2; i++)
    {
        swap(a[i],a[n-i-1]);
    }
    cout<<a<<endl;
}
void rev(string &a)
{
    int n=a.length();
    for(int i=0; i<+n/2; i++)
    {
        for(int j=n; j>=n/2; j--)
    {
        swap(a[i],a[j]);
    }
    }
    cout<<a<<endl;
}

int main()
{
    string a ;
    cout<<"enetr the string"<<endl;
    getline(cin,a);
    reverse(a);

    return 0;
}