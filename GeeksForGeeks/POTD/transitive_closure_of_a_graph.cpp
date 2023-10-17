// Given a directed graph, determine whether a vertex j is reachable from another vertex i
// for all vertex pairs (i, j) in the given graph. Here, vertex j is reachable
// from another vertex i means that there is a path from vertex i to j. The reachability
// matrix is called the transitive closure of a graph. The directed graph is represented
// by an adjacency matrix where there are N vertices.

// Example 1:

// Input: N = 4
// graph = {{1, 1, 0, 1},
//          {0, 1, 1, 0},
//          {0, 0, 1, 1},
//          {0, 0, 0, 1}}
// Output: {{1, 1, 1, 1},
//          {0, 1, 1, 1},
//          {0, 0, 1, 1},
//          {0, 0, 0, 1}}
// Explanation:
// The output list shows the reachable indexes.

class Solution
{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                for (int k = 0; k < N; k++)
                {
                    if (j == k)
                        graph[j][k] = 1;
                    if (graph[j][k] == 0)
                    {
                        if (graph[j][i] == 1 && graph[i][k] == 1)
                        {
                            graph[j][k] = 1;
                        }
                    }
                }
            }
        }
        return graph;
    }
};