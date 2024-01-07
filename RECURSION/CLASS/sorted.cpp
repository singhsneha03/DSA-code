#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool check(vector<int> &v, int &n,int i){
    //bc
    if (i == n-1){
        return true;
    }

    //one solve
    if(v[i+1]<v[i]){
        return false;
    }

    return check(v,n,i+1);
}
int main()
{
    vector<int>v ={10,20,30,40,80};
    int n=v.size();
    int i=0;
    bool sorted= check(v,n,i);
    if( sorted){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}