#include <iostream>
#include<map>
#include<queue>
#include<list>

using namespace std;

template<typename T>

class Graph{
    map<T, list<T>> l;
public:
    void addEdge(T x, T y){
        l[x].push_back(y);
    }
    void dfs_helper(T src, map<T, bool> &visited, list<T> &ordering){
        //Recursive function that will traverse the graph
        visited[src]=true;
        // go to all nbr of that node that is not visited
        for(T nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr, visited, ordering);
            }
        }
        ordering.push_front(src);
        return;
    }
    void dfs(){
        map<T, bool> visited;
        list<T> ordering;
        // mark all the nodes as not visited in the begining
        for(auto p:l){
            T node=p.first;
            visited[node]=false;
        }
        // iterate over all the vertices and init dfs call
        for(auto p:l){
            T node = p.first;
            if(!visited[node]){
                dfs_helper(node, visited, ordering);
            }
        }
        for(auto node: ordering){
            cout<<node<<endl;
        }
    }
};

int main() {
    Graph<string> g;
    g.addEdge("Python", "Data Preprocessing");
    g.addEdge("Python", "PyTorch");
    g.addEdge("Data Preprocessing", "ML");
    g.addEdge("PyTorch", "DL");
    g.addEdge("ML", "DL");
    g.addEdge("DL","FaceRecogn");
    g.addEdge("DataSet", "FaceRecogn");
    g.dfs();

    return 0;
}
