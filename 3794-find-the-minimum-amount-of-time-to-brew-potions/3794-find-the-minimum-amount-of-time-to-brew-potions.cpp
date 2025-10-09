class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size(), m = mana.size();
        vector<long long> pref(n);
        pref[0] = skill[0];
        for (int i = 1; i < n; ++i) pref[i] = pref[i-1] + skill[i];
        long long S = 0;
        for (int j = 1; j < m; ++j) {
            long long delta = LLONG_MIN;
            for (int i = 0; i < n; ++i) {
                long long left = pref[i];
                long long right = (i == 0 ? 0 : pref[i-1]);
                long long val = left * 1LL * mana[j-1] - right * 1LL * mana[j];
                if (val > delta) delta = val;
            }
            S += delta;
        }
        return S + pref[n-1] * 1LL * mana[m-1];
    }
};