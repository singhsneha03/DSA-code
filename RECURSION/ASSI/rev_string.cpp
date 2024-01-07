#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void solve(string &s,int start, int end){
    //basecase
    if(start>=end)
    return;

    swap(s[start],s[end]);
    solve(s,start+1,end-1);

}
int main()
{
    string s="sneha";
    int start=0;
    int end=s.size()-1;
    solve(s,start,end);
    cout<<s;
    return 0;
}