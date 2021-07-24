class Solution {
public:
    bool DFS(vector<vector<int>>& graph,int index,vector<int>&mark,int prev){
        mark[index]=!mark[prev];
        bool flag=true;
        for(auto i : graph[index]){
            if(mark[i] == -1){
                flag= DFS(graph,i,mark,index);
                 if(!flag)
                return false;
            }
            else if (mark[i] == mark[index])
                return false;
           
         }
         return true;   
    }
    bool isBipartite(vector<vector<int>>& graph) {
        bool flag=true;
       vector<int>mark(graph.size(),-1);
       for(int i=0;i<graph.size();i++){
               if(mark[i] == -1)
                   flag = DFS(graph,i,mark,0);
                   if(!flag)
                       return false;
           
       }
        
       return true;
   
        
    }
};
