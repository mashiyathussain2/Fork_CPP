#include <iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

// DSU
class DSU{
    int *parent;
    int *rank;
public:
    DSU(int n){
        parent = new int[n];
        rank = new int[n];
        for(int i=0; i<n; i++){
            parent[i] = -1;
            rank[i] = 1;
        }
    }
    // Find
    int find(int i){
        // base case
        if(parent[i] == -1){
            return i;
        }
        // otherwise
        return parent[i] = find(parent[i]);
    }
    // union
    void unite(int x, int y){
        int s1 = find(x);
        int s2 = find(y);
        if(s1 != s2){
            // union by rank
            if(rank[s1]<rank[s2]){
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }
            else{
                parent[s2]=s1;
                rank[s1] +=rank[s2];
            }
        }
    }
};

class Graph{
    vector<vector<int>>edgelist;
    int V;
public:
    Graph(int V){
        this->V=V;
    }
    void addEdge(int x, int y, int w){
        edgelist.push_back({w,x,y});
    }
    int kruksal_mst(){
        // sort all the edges based upon weight
        sort(edgelist.begin(), edgelist.end());
        //init DSU
        DSU s(V);
        int ans = 0;
        for(auto edge : edgelist){
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];

            // take that edge in MST if it doesnt form a cycle 
            if(s.find(x) != s.find(y)){
                s.unite(x,y);
                ans += w;
            }
        }
        return ans;
    }
};
int main() {
    Graph g(4);
    g.addEdge(0,1,1);
    g.addEdge(1,3,3);
    g.addEdge(3,2,4);
    g.addEdge(2,0,2);
    g.addEdge(0,3,2);
    g.addEdge(1,2,2);
    cout<<g.kruksal_mst()<<endl;

    return 0;
}
