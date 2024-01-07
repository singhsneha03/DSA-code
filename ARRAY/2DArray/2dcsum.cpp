#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void printrsum(int a[][3],int r, int c){
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+a[j][i];
        }
        cout<<sum<<" ";
    }
    
}
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=3;
    int c=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    printrsum(a,r,c );
    return 0;
}