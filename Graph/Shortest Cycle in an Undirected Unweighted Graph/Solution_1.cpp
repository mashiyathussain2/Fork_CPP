#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph{

    map<int, list<int>> adjList;
    public :
        void addEdge(int u, int v, bool bidir = true){
            adjList[u].push_back(v);
            if(bidir)
                adjList[v].push_back(u);
        }

        void shortestCycle(int src, int &ans){
            map<int, int> dist;
            for(auto i : adjList){
                dist[i.first] = INT_MAX;
            }
            queue<int> q;
            dist[src] = 0;
            q.push(src);
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto i : adjList[node]){
                    if(dist[i] == INT_MAX){
                        dist[i] = dist[node] + 1;
                        q.push(i);
                    }
                    else if(dist[i] >= dist[node])
                        ans = min(ans, dist[node] + dist[i] + 1);
                }
            }
            
        }
};

int main() {
    Graph g;
    g.addEdge(0, 6);
    g.addEdge(0, 5);
    g.addEdge(5, 1);
    g.addEdge(1, 6);
    g.addEdge(2, 6);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 1);
    int ans = INT_MAX;
    for(int i = 1;i < 6;i++)
        g.shortestCycle(i, ans);
    if(ans == INT_MAX)
        cout << "No cycle found";
    else
        cout << "Shortest cycle is of length " << ans << endl;
}
