class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int a[value];
        memset(a, 0, sizeof(a));
        for (int num : nums) {
            int temp = ((num % value) + value) % value;
            ++a[temp];
        }
        for (int i = 0; ; ++i) {
            int c = i % value;
            if (a[c] == 0) {
                return i;
            }
            --a[c];
        }
    }
};