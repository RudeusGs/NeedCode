class Solution {
public:
    set<pair<int,int>> bfs(const vector<vector<int>>& heights, const vector<pair<int,int>>& starts) {
        int m = heights.size();
        int n = heights[0].size();
        set<pair<int,int>> reachable;
        queue<pair<int,int>> q;

        for(auto &p : starts) q.push(p);

        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty()) {
            auto [r, c] = q.front(); q.pop();
            reachable.insert({r,c});

            for(auto &[dr, dc] : dirs){
                int nr = r + dr, nc = c + dc;
                if(nr >=0 && nr < m && nc >=0 && nc < n
                && reachable.find({nr,nc}) == reachable.end()
                && heights[nr][nc] >= heights[r][c]){
                    q.push({nr,nc});
                }
            }
        }

        return reachable;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if (heights.empty()) return {};
        int m = heights.size(), n = heights[0].size();

        vector<pair<int,int>> pacific_starts, atlantic_starts;
        for(int i=0;i<m;i++){ 
            pacific_starts.push_back({i,0});
            atlantic_starts.push_back({i,n-1});
        }
        for(int j=0;j<n;j++){
            pacific_starts.push_back({0,j});
            atlantic_starts.push_back({m-1,j});
        }

        set<pair<int,int>> pacific_reach = bfs(heights, pacific_starts);
        set<pair<int,int>> atlantic_reach = bfs(heights, atlantic_starts);

        vector<vector<int>> res;
        for(auto &p : pacific_reach){
            if(atlantic_reach.count(p))
                res.push_back({p.first, p.second});
        }
        return res;
    }
};