#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
bool search(int a[][3],int r, int c,int key){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==key){
                return true;
            }

        }
        
    }
    return false;
    
}
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=3;
    int c=3;
    int key=4;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    search(a,r,c,key );
    bool ans=search(a,r,c,key);
    cout<<ans;
    return 0;
}