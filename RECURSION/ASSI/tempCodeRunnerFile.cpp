#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool solve(string s,int i,int j)
{
    //basecase
    if(i>=j)
    return;

    if(i == j)
    {
        solve(s,i+1,j-1);
    }
    else{
        return false;
    }
    return true;
}
int main()
{
    string s="racecar";
    int i=0;
    int j =s.size()-1;
    solve(s,i,j);
    return 0;
}