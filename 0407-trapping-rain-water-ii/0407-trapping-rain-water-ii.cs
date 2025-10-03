public class Solution {
    public int TrapRainWater(int[][] heightMap) {
        int m = heightMap.Length;
        if (m == 0) return 0;
        int n = heightMap[0].Length;
        if (m <= 2 || n <= 2) return 0;
        bool[,] visited = new bool[m, n];
        var pq = new PriorityQueue<(int h, int r, int c), int>();
        for (int i = 0; i < m; i++) {
            pq.Enqueue((heightMap[i][0], i, 0), heightMap[i][0]);
            pq.Enqueue((heightMap[i][n - 1], i, n - 1), heightMap[i][n - 1]);
            visited[i, 0] = true;
            visited[i, n - 1] = true;
        }
        for (int j = 0; j < n; j++) {
            if (!visited[0, j]) {
                pq.Enqueue((heightMap[0][j], 0, j), heightMap[0][j]);
                visited[0, j] = true;
            }
            if (!visited[m - 1, j]) {
                pq.Enqueue((heightMap[m - 1][j], m - 1, j), heightMap[m - 1][j]);
                visited[m - 1, j] = true;
            }
        }
        long total = 0;
        int[][] dirs = new int[][] {
            new int[]{1,0}, new int[]{-1,0},
            new int[]{0,1}, new int[]{0,-1}
        };
        while (pq.Count > 0) {
            var (h, r, c) = pq.Dequeue();
            foreach (var d in dirs) {
                int nr = r + d[0];
                int nc = c + d[1];
                if (nr < 0 || nr >= m || nc < 0 || nc >= n) continue;
                if (visited[nr, nc]) continue;
                visited[nr, nc] = true;
                int nh = heightMap[nr][nc];
                if (nh < h) {
                    total += (h - nh);
                    pq.Enqueue((h, nr, nc), h);
                } else {
                    pq.Enqueue((nh, nr, nc), nh);
                }
            }
        }
        return (int)total;
    }
}
