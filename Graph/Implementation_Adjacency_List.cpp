// Adjacency list implementation for generic data
// Weighted edges
#include <iostream>
#include<unordered_map>
#include<list>
#include<cstring>

using namespace std;

class Graph{
    //Adj. list
    unordered_map<string,list<pair<string,int> > > l;
public:
void addEdge(string x, string y, bool bidir, int wt){
    l[x].push_back(make_pair(y,wt));
    if(bidir){
        l[y].push_back(make_pair(x,wt));
    }
}
void printAdjList(){
    //iterate over all the keys in the map
    for(auto p:l){
        string city = p.first;
        list<pair<string, int>> nbrs  =p.second;
        cout<<city<<"->";
        for(auto nbr:nbrs){
            string dest = nbr.first;
            int dist = nbr.second;
            cout<<dest<<" "<<dist<<",";
        }
        cout<<endl;
    }
}
};
int main() {
    Graph g;
    g.addEdge("A","B", true, 20);
    g.addEdge("B","D", true, 40);
    g.addEdge("A","C", true, 10);
    g.addEdge("C","D", true, 40);
    g.addEdge("A","D", false, 50);

    return 0;
}
