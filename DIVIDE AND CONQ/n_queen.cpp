#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

void print(vector<vector<int> > board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }
}
void solve(vector<vector<int> > &board,int col,int n)
{
    if(col>=n){
        print(board,n);
        return;
    }
}
int main()
{
    int n=4;
    vector<vector<int> > board (n,vector<int>(n,0));
    int col=0;
    solve(board,col,n);
    return 0;
}