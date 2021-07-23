#include <iostream>
#include <queue>
#include <list>
#include <map>
using namespace std;

class Graph{
	map<int,list<int>> l;
public:
	//Creating the Graph
	void addedge(int x, int y){
		l[x].push_back(y);
	}

	void Topological_sort(){
		int *indegree = new int[100]();//added (): this will initialise all entries to 0

		//Setting all indegrees to 0.
		for(auto nodes:l){  // this will intilaise only   those elements that are there in the map 
			indegree[nodes.first] = 0;
		}

		//Setting all indegrees to their value.
		for(auto x:l){
			for(auto y:x.second){
				indegree[y]++;
			}
		}

		queue<int> q;
		for(auto node:l){
			if(indegree[node.first]==0){
				q.push(node.first);
			}
		}

		while(!q.empty()){
			int temp = q.front();
			q.pop();
			cout<<temp<<" ";
			for(auto p:l[temp]){
				indegree[p]--;
				if(indegree[p]==0){
					q.push(p);
				}
			}
		}
	}
};

int main(){
	Graph g;
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,2);
	g.addedge(4,5);
	g.addedge(3,5);
	g.addedge(2,5);
	g.Topological_sort();
	return 0;
}	
