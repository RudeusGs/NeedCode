class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> diem;
        for(int i = 0; i < n; ++i){
        diem.push_back({score[i], i});
        }
        sort(diem.rbegin(), diem.rend());
        vector<string> ans(n);
    for(int i = 0; i < n; ++i){
        int idx = diem[i].second;
        if(i == 0)
            ans[idx] = "Gold Medal";
        else if(i == 1)
            ans[idx] = "Silver Medal";
        else if(i == 2)
            ans[idx] = "Bronze Medal";
        else
            ans[idx] = to_string(i+1);
    }
    return ans;
    }
};