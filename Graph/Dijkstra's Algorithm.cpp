#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{
    unordered_map<T, list<pair<T, int >>> m;
public:
    void addEdge(T u, T v, int dist, bool bidir = true){
        m[u].push_back(make_pair(v,dist));
        if(bidir){
            m[v].push_back(make_pair(u,dist));
        }
    }
    void printAdj(){
        for(auto j:m){
            cout<<j.first<<"->";
            for(auto l:j.second){
                cout<<"("<<l.first<<","<<l.second<<")";
            }
            cout<<endl;
        }
    }
    void dijsktraSSSP(T src){
        unordered_map<T, int> dist;
        // set all distance to inifinity
        for(auto j:m){
            dist[j.first] = INT_MAX;
        }
        // make a set to find out node with the min distance
        set<pair<int,T>>s;
        dist[src]=0;
        s.insert(make_pair(0,src));
        while(!s.empty()){
            // find the pair at the front
            auto p = *(s.begin());
            T node = p.second;
            int nodeDist = p.first;
            s.erase(s.begin());

            // iterate over nbr of the current node 
            for(auto childPair : m[node]){
                if(nodeDist + childPair.second < dist[childPair.first]){
                    T dest = childPair.first;
                    auto f = s.find(make_pair(dist[dest],dest));
                    if(f != s.end()){
                        s.erase(f);
                    }
                    // insert the new pair
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest],dest));
                }
            }
        }
        // lets print distance to all other node from src
        for(auto d:dist){
            cout<<d.first<<" is located at distance of "<<d.second<<endl;
        }
    }
};
int main() {
    Graph<int>g;
    g.addEdge(1,2,1);
    g.addEdge(1,3,4);
    g.addEdge(2,3,1);
    g.addEdge(3,4,2);
    g.addEdge(1,4,7);
    g.dijsktraSSSP(1);

    return 0;

}
