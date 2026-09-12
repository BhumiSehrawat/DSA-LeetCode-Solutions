class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //here we build a graph
        vector<vector<int>>graph(n);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        queue<int>q;
        vector<bool>visit(n,false);
        q.push(source);
        visit[source]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==destination){
                return true;
            }
            for(int neigh:graph[node]){
                if(!visit[neigh]){
                    visit[neigh]=true;
                    q.push(neigh);

                }

            }
        }
        return false;
        
    }
};