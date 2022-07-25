//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define INT_MAX 100000000
class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        vector<int> dist(V+1, INT_MAX);
        dist[S]=0;
        for(int i=0;i<V-1;i++)
        {
            for(auto edge:adj)
            {
                int u = edge[0];
                int v = edge[1];
                int wt = edge[2];
                if(dist[u]!=INT_MAX and dist[u]+wt<dist[v])
                {
                    dist[v]=dist[u]+wt;
                }
            }
        }
        
        return dist;
    }
};
