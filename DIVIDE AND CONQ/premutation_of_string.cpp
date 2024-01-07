#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void printperm(string &a,int i)
{
    //basecase 
    if(i>=a.length()){
        cout<<a<<" ";
        return;
    }
    //swapping
    for(int j=i;j<a.length();j++)
    {
        swap(a[i],a[j]);
        //rec call
        printperm(a,i+1);
        //backtracking- to recreate original input string abc
        swap(a[i],a[j]);
        
    }
    
}
int main()
{
    string a="abc";
    int i=0;
    printperm(a,i);
    return 0;
}