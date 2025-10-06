using System;
using System.Collections.Generic;

public class Solution {
    public int SwimInWater(int[][] grid) {
        int n = grid.Length;
        int[,] dirs = new int[,] { {1,0}, {-1,0}, {0,1}, {0,-1} };
        bool[,] visited = new bool[n, n];
        var pq = new PriorityQueue<(int x, int y, int h), int>();
        pq.Enqueue((0, 0, grid[0][0]), grid[0][0]);
        visited[0, 0] = true;
        int res = 0;
        while (pq.Count > 0) {
            var (x, y, h) = pq.Dequeue();
            res = Math.Max(res, h);
            if (x == n - 1 && y == n - 1) return res;
            for (int i = 0; i < 4; i++) {
                int nx = x + dirs[i, 0];
                int ny = y + dirs[i, 1];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx, ny]) {
                    visited[nx, ny] = true;
                    pq.Enqueue((nx, ny, grid[nx][ny]), grid[nx][ny]);
                }
            }
        } 
        return -1;
    }
}
