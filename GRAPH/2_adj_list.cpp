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
    unordered_map<int,list<int> > adjlist;
    //unordered_map<int,pair<int,int> > adjlist; // weight
    
    void addedge(int u, int v, bool dirn){
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
};
int main()
{
    graph g;
    g.addedge(0,1,0);
    g.addedge(1,2,0);
    g.addedge(0,2,0);

    cout<<endl;

    g.print();

    return 0;
}