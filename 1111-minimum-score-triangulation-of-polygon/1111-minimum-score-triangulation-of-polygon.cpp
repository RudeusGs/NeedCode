#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int a = 2; a < n; a++){
            for(int i = 0; i + a < n; i++){
                int j = i + a;
                dp[i][j] = INT_MAX;
                for(int k = i + 1; k < j; k++){
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + values[i] * values[j] * values[k]);
                }
            }
        }
        return dp[0][n - 1];
    }
};
