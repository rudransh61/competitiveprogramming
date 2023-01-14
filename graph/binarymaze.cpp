#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

// Check if it is possible to go to (x, y) from the current position. The
// function returns false if the cell has value 0 or already visited
bool isSafe(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y)
{
    return (x >= 0 && x < mat.size() && y >= 0 && y < mat[0].size()) &&
           mat[x][y] == 1 && !visited[x][y];
}

void findShortestPath(vector<vector<int>> &mat, vector<vector<bool>> &visited,
                      int i, int j, int x, int y, int &min_dist, int dist)
{
    if (i == x && j == y)
    {
        min_dist = min(dist, min_dist);
        return;
    }
    // set (i, j) cell as visited
    visited[i][j] = true;
    // go to the bottom cell
    if (isSafe(mat, visited, i + 1, j))
    {
        findShortestPath(mat, visited, i + 1, j, x, y, min_dist, dist + 1);
    }
    // go to the right cell
    if (isSafe(mat, visited, i, j + 1))
    {
        findShortestPath(mat, visited, i, j + 1, x, y, min_dist, dist + 1);
    }
    // go to the top cell
    if (isSafe(mat, visited, i - 1, j))
    {
        findShortestPath(mat, visited, i - 1, j, x, y, min_dist, dist + 1);
    }
    // go to the left cell
    if (isSafe(mat, visited, i, j - 1))
    {
        findShortestPath(mat, visited, i, j - 1, x, y, min_dist, dist + 1);
    }
    // backtrack: remove (i, j) from the visited matrix
    visited[i][j] = false;
}

// Wrapper over findShortestPath() function
int findShortestPathLength(vector<vector<int>> &mat, pair<int, int> &src,
                           pair<int, int> &dest)
{
    if (mat.size() == 0 || mat[src.first][src.second] == 0 ||
        mat[dest.first][dest.second] == 0)
        return -1;

    int row = mat.size();
    int col = mat[0].size();
    // construct an `M × N` matrix to keep track of visited cells
    vector<vector<bool>> visited;
    visited.resize(row, vector<bool>(col));

    int dist = INT_MAX;
    findShortestPath(mat, visited, src.first, src.second, dest.first, dest.second,
                     dist, 0);

    if (dist != INT_MAX)
        return dist;
    return -1;
}

int main()
{
    vector<vector<int>> mat =
        {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
         {1, 0, 1, 0, 1, 1, 1, 0, 1, 1},
         {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
         {0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
         {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
         {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
         {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
         {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
         {1, 1, 0, 0, 0, 0, 1, 0, 0, 1}};

    pair<int, int> src = make_pair(0, 0);
    pair<int, int> dest = make_pair(3, 4);
    int dist = findShortestPathLength(mat, src, dest);
    if (dist != -1)
        cout << "Shortest Path is " << dist;

    else
        cout << "Shortest Path doesn't exist";

    return 0;
}
