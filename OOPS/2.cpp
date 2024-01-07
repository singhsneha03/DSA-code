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
    char b[100];
    
    for(int i=n; i>0; i--)
    {
       cout<<a[i];
    }
    
}
int main()
{
    string a;
    cout<<"enter d string"<<endl;
    getline(cin,a);
    reverse(a);

    return 0;
}