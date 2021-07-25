#include<bits/stdc++.h>
using namespace std;
class graph{
    int v;
    list<pair<int,int>>l;
public:
    graph(int v)
    {
        this->v=v;
    }
    void add_edge(int u,int v)
    {
        l.push_back(make_pair(u,v));
    }
    int find(int i ,int parent[])
    {
        if(parent[i]==-1)
            return i;
        return parent[i]=find(parent[i],parent);
    }
    void unionSet(int x,int y,int parent[],int rank[])
    {
        int s1=find(x,parent);
        int s2=find(y,parent);

        if(s1!=s2)
        {
            if(rank[s1]<rank[s2])
            {
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }
            else
            {
                parent[s2]=s1;
                rank[s1]+=rank[s2];
            }
        }
    }
    int pairing()
    {
        int *parent=new int[v];
        int *rank=new int[v];
        for(int i=0;i<v;i++)
        {
            parent[i]=-1;
            rank[i]=1;
        }

        int ans=0;
        for(auto edge :l)
        {
            int i=edge.first;
            int j=edge.second;

            int s1=find(i,parent);
            int s2=find(j,parent);

            unionSet(s1,s2,parent,rank);
        }
        for(int i=0;i<v;i++)
        {
            ans+=v-rank[find(i,parent)];
        }
        delete [] parent;
        delete [] rank;
        return ans/2;
    }
};



int main()
{
    int n,m;
    cin>>n>>m;
    graph g(n);
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        g.add_edge(x,y);
    }
    cout<<g.pairing()<<endl;
}
