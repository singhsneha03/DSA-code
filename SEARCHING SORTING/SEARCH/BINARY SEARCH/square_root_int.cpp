#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int sqroot(int n)
{
    int search=n;
    int start=0;
    int end= n;
    int mid= start+(end-start)/2;
    int ans=0;
    while(start <= end){
    if(mid*mid == search)
    return mid;

    if(mid*mid > search){
        // ls
        end= mid-1;}

    else{
        // rs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    ans = mid;
    start= mid+1;}
    
    mid= start+(end-start)/2;
    }
    return ans;

}

int main()
{
    int n;
    cout<<"enetr the no:";
    cin>>n;
    int ans= sqroot(n);
    cout<<"the ans is:"<< ans <<endl;
    return 0;
}