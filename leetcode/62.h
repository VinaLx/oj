// A robot is located at the top-left corner of a m x n grid (marked 'Start' in
// the diagram below).

// The robot can only move either down or right at any point in time. The robot
// is trying to reach the bottom-right corner of the grid (marked 'Finish' in
// the diagram below).

// How many possible unique paths are there?

namespace UniquePath {

// simple dp
class Solution {
  public:
    int uniquePaths(int m, int n) {
        int grid[101][101] = {0};
        for (int i = 1; i <= m; ++i) {
            grid[i][1] = 1;
        }
        for (int i = 1; i <= n; ++i) {
            grid[1][i] = 1;
        }
        for (int i = 2; i <= m; ++i) {
            for (int j = 2; j <= n; ++j) {
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            }
        }
        return grid[m][n];
    }
};

}