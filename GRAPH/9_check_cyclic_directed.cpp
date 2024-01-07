#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

bool checkCyclicDirectedGraphUsingDfs(int src, unordered_map<int,bool>& visited,
unordered_map<int,bool> dfsVisited) {

		visited[src] = true;
		dfsVisited[src] = true;

		for(auto nbr: adjList[src]) {
			if(!visited[nbr]) {
				bool aageKaAnswer = checkCyclicDirectedGraphUsingDfs(nbr, visited, dfsVisited);
				if(aageKaAnswer == true)
					return true;
			}
			if(visited[nbr] == true && dfsVisited[nbr] == true) {
				return true;
			}
		}
		//yaha hi galti hoti h 
		dfsVisited[src] = false;
		return false;
	}

int main()
{
    bool ans = false;
	unordered_map<int, bool> visited;
	unordered_map<int, bool> dfsVisited;
	for(int i=0; i<n; i++) {
		if(!visited[i] ) {
			ans = g.checkCyclicDirectedGraphUsingDfs(i,visited,dfsVisited);
			if(ans == true)
				break;
		}
	}

	if(ans == true) 
		cout << "Cycle is Present" << endl;
	else
		cout << "Cycle Absent" << endl;

    return 0;
}