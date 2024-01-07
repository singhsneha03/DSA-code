#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void maxi(int a[], int n, int i, int &max){
    if(i>=n){
        return;
    }

    //1 case
    if(a[i]>max){
        max=a[i];
    }
    //rec
    maxi(a,n,i+1,max);
}
void mini(int a[],int n,int i,int &min){
if(i >= n){
    return;
}

if(a[i]<min){
    min=a[i];
}

mini(a,n,i+1,min);

}
int main()
{
    int a[]={1,3,6,3,7,9,8,2};
    int n=8;
    int i=0;
    int max=INT_MIN;
    maxi(a, n, i, max);
    cout<<max<<endl;

    int min= INT_MAX;
    mini(a,n,i,min);
    cout<<min<<endl;
    return 0;
}