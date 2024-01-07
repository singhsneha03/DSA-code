#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>a{1,2,3,4,4,4,4,4,5,6,6,8};
    int target=4;
    auto store=lower_bound(a.begin(),a.end(),target);
    cout<<"ans"<<store-a.begin()<<endl;
    return 0;
}