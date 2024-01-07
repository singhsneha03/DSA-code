#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

int check(string &s, int &n, int i, char &key){
    if(i>=n){
        //key not found 
        return -1;
    }
    if(s[i] == key){
        
        return i;
    }

    int ans= check(s,n,i+1,key);
    return ans;
}
int main()
{
    string a= "snehasingh";
    int n= a.length();
    int i=0;
    char key= 's';
    int ans= check(a,n,i,key);
    cout<<ans<<endl;
    return 0;
}