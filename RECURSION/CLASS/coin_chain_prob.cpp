#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

int solve(vector<int> &a, int target)
{
    //base case
    if(target == 0)
    return 0;

    if (target < 0)
    return INT_MAX;

    int mini=INT_MAX;
    for(int i =0; i<a.size(); i++){
        int ans=solve(a, target-a[i]);
        if(ans != INT_MAX)
            mini= min(mini,ans+1);//ans+1 coz 1 ceka hi hoga na koi bhi value ka 

    }
    return mini;
}
int main()
{
    vector<int> a{1,2};
    int target=5;
    int ans=solve(a,target);
    cout<<ans;
    return 0;
}