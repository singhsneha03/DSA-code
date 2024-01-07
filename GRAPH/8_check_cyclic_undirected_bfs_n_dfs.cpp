#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

bool checkcyclicbfs(int src, unordered_map<int,bool> &visited){

    unordered_map<int,int>parent;

    queue <int>q;
    q.push(src);
    visited[src]=true;
    parent[src]=-1;

    while(!q.empty()){
        int frontnode=q.front();
        q.pop();

        for(auto nbr: adjlist[frontnode]){
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;
                parent[nbr]=frontnode;
            }
            else{
                //already visited
                if(visited[nbr] && nbr != parent[frontnode]){
                    //cycle present
                    return true;
                }
            }
        }
    }
    return false;
}

bool checkcyclicdfs(int src,unordered_map<int,bool> &visited,int parent){
    visited[src]=true;
}

int main()
{
    //disconnected
    //bfs
    int n;
    bool ans=false;
    unordered_map<int,bool>visited;
    for(int i=0;i,n;i++){
        if(!visited[i]){
            ans=checkcyclicbfs(i,visited);
            if(ans == true){
                break;
            }
        }
    }

    if(ans==true){
        cout<<"cyclei is present"<<endl;
    }
    else{
        cout<<"cycle not present"<<endl;
    }

    //dfs
    bool ansdfs=false;
    unordered_map<int,bool>visiteddfs;
    for(int i=0;i,n;i++){
        if(!visiteddfs[i]){
            ansdfs=checkcyclicdfs(i,visiteddfs);
            if(ansdfs == true){
                break;
            }
        }
    }

    if(ansdfs==true){
        cout<<"cyclei is present"<<endl;
    }
    else{
        cout<<"cycle not present"<<endl;
    }
    
    return 0;
}