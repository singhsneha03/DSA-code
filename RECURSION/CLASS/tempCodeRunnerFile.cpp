#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void make(string s, string output, int i, vector<int> &ans){
    if( i >= s.length()){
        ans.push_back(output);
        return;
    }

    //exclude
    make(s,output,i+1,ans);

    //include
    output=output+s[i]; //output.pushback(str[i])
    make(s,output,i+1,ans);

}
int main()
{
    string a="abc";
    string output=" ";//for storing result in other string (tempo string in which v make ans)
    int i=0;
    vector<int>ans;
    make(a,output,i,ans);
    for(auto val:ans){
        cout<<val;
    }
    return 0;
}