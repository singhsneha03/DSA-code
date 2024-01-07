#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cout<<"enter d no of nodes"<<endl;
    cin>>n;

    vector<vector<int> >adj(n,vector<int>(n,0));
    int e;
    cout<<"enter d no of edges"<<endl;
    cin>>e;

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        //mark 1
        adj[u][v]=1;
    }

    //printing
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}