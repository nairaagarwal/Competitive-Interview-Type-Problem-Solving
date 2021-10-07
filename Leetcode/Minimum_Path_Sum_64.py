'''
Author: Tri Truong
Problem Link: https://leetcode.com/problems/minimum-path-sum/
Statement: Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
'''

from typing import List
class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        '''
        All numbers >= 0
        '''
        dp_matrix = grid.copy()
        m = len(grid)
        n = len(grid[0])
        for i in range(1, m):
            dp_matrix[i][0] = dp_matrix[i][0] + dp_matrix[i - 1][0]
        for i in range(1, n):
            dp_matrix[0][i] = dp_matrix[0][i] + dp_matrix[0][i - 1]
        for i in range(1, m):
            for j in range(1, n):
                # cell at [i][j]
                top_value = dp_matrix[i - 1][j]
                left_value = dp_matrix[i][j - 1]
                dp_matrix[i][j] = grid[i][j] + min(top_value, left_value)
        return dp_matrix[m - 1][n - 1]

if __name__ == "__main__":
    sol = Solution()
    test_grid = [[1,3,1],[1,5,1],[4,2,1]]
    result = sol.minPathSum(test_grid)
    print(result)