#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& grid, int m, int n) {
        if (r < 0 || r >= m || c < 0 || c >= n)
            return;

        if (grid[r][c] == 1)
            return;

        // Mark this land as visited (make it as water)
        grid[r][c] = 1;

        dfs(r - 1, c, grid, m, n); // Up
        dfs(r + 1, c, grid, m, n); // Down
        dfs(r, c - 1, grid, m, n); // Left
        dfs(r, c + 1, grid, m, n); // Right
    }

    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Step 1: Remove land connected to the boundary
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (r == 0 || r == m - 1 ||
                    c == 0 || c == n - 1) {

                    if (grid[r][c] == 0)
                        dfs(r, c, grid, m, n);
                }
            }
        }

        // Step 2: Count remaining islands
        int count = 0;

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] == 0) {
                    count++;
                    dfs(r, c, grid, m, n);
                }
            }
        }

        return count;
    }
};
