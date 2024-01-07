#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int binarysearch(vector<int>&a,int &key,int s,int e){
    //bc
    if(s>e) //case1
    return -1;

    int mid= s+(e-s)/2;

    if(a[mid]==key) //case 2
    return mid;

    if(a[mid]<key){
        return binarysearch(a,key,mid+1,e);
    }
    else{
        return binarysearch(a,key,s,mid-1);
    }

}
int main()
{
    vector <int>a={10,20,30,40,50,60,70,80};
    int key= 10;
    int n=a.size();
    int s=0;
    int e=n-1;
    int ans= binarysearch(a,key,s,e);
    cout<<ans;
    return 0;
}