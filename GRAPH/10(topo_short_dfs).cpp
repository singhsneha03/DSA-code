#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& ans) {
		
		visited[src] = true;

		for(auto neighbour: adjList[src]) {
			if(!visited[neighbour] ) {
				topoSortDfs(neighbour, visited, ans);
			}
		}

		//while returning, store the node in stack
		ans.push(src);
	}
int main()
{
    unordered_map<int,bool> visited;
	stack<int> ans;
	for(int i=0; i<n; i++) {
		if(!visited[i] ){
			g.topoSortDfs(i,visited,ans);
		}
	}

	cout << "Top Sort: " << endl;
	while(!ans.empty()) {
		cout << ans.top();
		ans.pop();
	}



    return 0;
}