#include<bits/stdc++.h> 
using namespace std; 

void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 
DFSUtil(int s,bool visited[],vector<int> adj[])
{
	visited[s] = true;
	cout<<s<<" ";
	vector<int>::iterator i;
	for(i = adj[s].begin();i!= adj[s].end();++i)
	{
		if(!visited[*i])
		{
			DFSUtil(*i,visited,adj);
		}
	}
}
void DFS(int s,vector<int> adj[])
{
	bool *visited = new bool[5];
	for(int i=0;i< 5;i++)
	{
		visited[i] = false;
	}
	DFSUtil(s, visited,adj);
	
} 

int main() 
{ 
	int newMax;
	int V = 5; 
	vector<int> adj[V]; 
	addEdge(adj, 0, 1); 
	addEdge(adj, 0, 2); 
	addEdge(adj, 1, 2); 
	addEdge(adj, 2, 0);
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 
	
	DFS(2,adj);
	return 0;
	
}

