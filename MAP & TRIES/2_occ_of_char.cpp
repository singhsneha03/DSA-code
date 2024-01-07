#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

int main()
{
    string a="thiruvananthapuram";
    unordered_map<char,int>b;

    for(int i=0;i<a.length();i++){
        char c=a[i];
        b[c]++;
    }

    for(auto i:b){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}