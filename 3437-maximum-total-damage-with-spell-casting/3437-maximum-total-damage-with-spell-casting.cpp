class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int, int> mp;
        for(int i : power) mp[i]++;
        map<int, long long> sumMp;
        for (auto &i : mp) sumMp[i.first] = 1LL * i.first * i.second;
        if(sumMp.empty()) return 0LL;
        vector<pair<int, long long>> arr;
        for(auto &i : sumMp) arr.push_back(i);
        int n = arr.size();
        vector<long long> dp(n, 0LL);
        for(int i = 0; i < n; ++i){
            long long a = arr[i].second;
            int l = 0, r = i - 1, prev = -1;
            while(l <= r){
                int mid = (l + r) / 2;
                if(arr[i].first - arr[mid].first > 2) {
                    prev = mid;
                    l = mid + 1;
                }else {
                    r = mid - 1;
                }
            }
            if(prev != -1) a += dp[prev];
            long long b = (i == 0 ? 0LL : dp[i - 1]);
            dp[i] = max(b, a);
        }
        return dp[n - 1];
    }
};