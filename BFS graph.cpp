  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vic[V]={0};
        vic[0]=1;
        vector<int>BFS;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            BFS.push_back(node);
            
            for(auto it:adj[node]){
                if(!vic[it]){
                    vic[it]=1;
                    q.push(it);
                }
            }
        }return BFS;
    }
};