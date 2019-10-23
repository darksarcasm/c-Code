#include<bits/stdc++.h> 
using namespace std; 

//map declaration
multimap<int, int> g;	
 
// undirected graph. 

void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

// A utility function to print the adjacency list 
// representation of graph 
int printGraph(vector<int> adj[], int V) 
{ 
	int x;
	int max = 0;
	for (int v = 0; v < V; ++v) 
	{ 
		cout << "\n Adjacency list of vertex "
			<< v << "\n head "; 
		int y=adj[v].size();
		if(y>max)
			max = y-1;
		for ( x=0;x<y;x++) {
		
			cout << "-> " << adj[v][x]; 
			if(x == max)
			{
				g.insert(pair<int, int>(max, adj[v][x]));
			}
		}
		printf("\n"); 
	} 
	return max;
} 

void printMap(multimap<int,int> g,int max)
{
	map<int, int>::iterator itr;
	map<int, int>::iterator it;
	for (itr = g.begin(); itr != g.end(); itr++) 
	{ 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
	}
	it = g.find(max);
	cout<<it->second;
}

// Driver code 
int main() 
{ 
	int newMax;
	int V = 5; 
	vector<int> adj[V]; 
	addEdge(adj, 0, 1); 
	addEdge(adj, 0, 4); 
	addEdge(adj, 1, 2); 
	addEdge(adj, 1, 3); 
	addEdge(adj, 1, 4); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 
	newMax = printGraph(adj, V); 
	printMap(g,newMax);
	return 0; 
} 

