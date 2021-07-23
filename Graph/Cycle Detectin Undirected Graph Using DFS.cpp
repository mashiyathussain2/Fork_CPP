#include<iostream>
#include<map>
#include<queue>
#include<list>
#include<cstring>
using namespace std;
class Graph{
    list<int> *l;
    int V;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int x, int y, bool directed = true){
        l[x].push_back(y);
        if(!directed){
            l[y].push_back(x);
        }
    }
    bool cycle_helper(int node, bool *visited, int parent){

        // visite a node
        visited[node]=true;
        for(int nbr:l[node]){
            // two cases
            if(!visited[nbr]){
                // go recursively visit the nbr
                bool cycle_avail = cycle_helper(nbr, visited, node);
                if(cycle_avail){
                    return true;
                }
            }
            // nbr is visited but nbr should not be equal to parent
            else if(nbr!=parent){
                return true;
            }
        }
        return false;
    }
    bool contains_cycle(){
        // check for cycle in directed graph
        bool *visited = new bool[V];
        for(int i=0; i<V;i++){
            visited[i]=false;
        }
        return cycle_helper(0,visited,-1);
    }
};
int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
   if(g.contains_cycle()){
       cout<<"Yes undirected graph contains cycle";
   }
   else{
       cout<<"No undirected graph does not contain cycle";
   }

    return 0;
}
