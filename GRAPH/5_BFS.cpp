#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph{
    public:
    unordered_map<T,list<T > adjlist;
    //unordered_map<int,pair<int,int> > adjlist; // weight
    
    void addedge(T u,T v, bool dirn){
        //direction= 0-undirected graph
        //direction=1-directed graph
        //create an edge frm u to v
        adjlist[u].push_back(v);

        if(dirn ==0){
            //create edge frm v to u
            adjlist[v].push_back(u);
        }
    }

    void print(){
        for(auto node:adjlist){
            cout<<node.first<<" ->";
            for(auto neigh:node.second){
                cout<<neigh<<",";
            }
            cout<<endl;
        }
    }

    void bfs(T src){
        queue<T>;
        unordered_map<T,bool>visit;

        q.push(src);
        visit[src]=true;

        while(!q.empty()){
            int frontnode=q.front();
            q.pop;
            cout<<frontnode;

            //insert neigh
            for(auto neigh:adjlist[frontnode]){
                if(!visit[neigh]){
                    q.push(neigh);
                    visit[neigh]=true;
                }
            }
        }
    }
};


int main()
{
    graph  <char>g; // cna include any type data u want to
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(0,2,0);

    cout<<endl;

    g.print();

    return 0;
} 