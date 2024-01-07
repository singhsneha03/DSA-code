#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool solve(string &s,int i,int j)
{
    //basecase
    if(i>j)
    return true;

    if(s[i] != s[j])
    {
        return false;
    }
   
    return solve(s,i+1,j-1);

}
int main()
{
    string s="racecar";
    int i=0;
    int j =s.size()-1;
    solve(s,i,j);
    cout<<solve;
    return 0;
}