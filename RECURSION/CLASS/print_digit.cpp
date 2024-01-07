#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void print(int n){
    if(n == 0){
        return;
    }
    int digit= n%10;
    print(n / 10);
    cout<<digit<<" ";

    
}
int main()
{
    int n= 453;
    if(n==0){
        cout<<0;

    }
    print(n);
    return 0;
}