#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

void dfs(int src, unordered_map<int, bool>& visited) {
    cout << src << ", ";
    visited[src] = true;

    for(auto neighbour: adjList[src]) {
      if(!visited[neighbour] ) {
        dfs(neighbour, visited);
      }
    }
  }

int main()
{
    return 0;
}