#include<bits/stdc++.h>
using namespace std;

vector<int>bfs(int v,vector<int>adj[])
{
    int visited[v+1];
    for (int i = 0; i < v+1; i++)
    {
        visited[i]=0;
    }
    visited[0]=1;

    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        cout<<node<<endl;

        for(auto it: adj[node])
        {
            if(!visited[it])
            {
                visited[it]=1;
                cout<<it<<endl;
                q.push(it);
            }
        }

    }
    return bfs;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>ans =bfs(n,adj);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<"---"<<endl;
    }
    return 0;
}