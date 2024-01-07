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

class graph{
    public:
    unordered_map<int, list<pair<int, int>>> adjlist;
    
    void addedge(int u, int v,int weight, bool dirn){
        //direction= 0-undirected graph
        //direction=1-directed graph
        //create an edge frm u to v
        adjlist[u].push_back({v,weight});

        if(dirn ==0){
            //create edge frm v to u
            adjlist[v].push_back({u,weight});
        }
    }

    void print(){
        for(auto node:adjlist){
            cout<<node.first<<" ->";
            for(auto neigh:node.second){
                cout<<"("<<neigh.first<<","<<neigh.second<<")";
            }
            cout<<endl;
        }
    }
};
int main()
{
    graph g;
    g.addedge(0,1,5,0);
    g.addedge(1,2,1,0);
    g.addedge(0,2,8,0);

    cout<<endl;

    g.print();

    return 0;
}