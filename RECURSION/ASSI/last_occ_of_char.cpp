#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void solve( string &s, char x, int i,int &ans)
{
    //basecase
    if(i>=s.size())
    return;

    if(s[i]==x){
    ans=i;}

    solve(s,x,i+1,ans);
    
}
int main()
{
    string s="abcdefabsd";
    char x='a';
    int i=0;
    int ans=-1;
    solve(s,x,i,ans);
    cout<<ans;
    return 0;
}