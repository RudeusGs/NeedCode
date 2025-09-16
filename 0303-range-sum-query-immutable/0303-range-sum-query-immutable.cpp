class NumArray {
public:
    vector<int> pfSum;
    NumArray(vector<int>& nums) {
        pfSum.resize(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            pfSum[i + 1] = pfSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return pfSum[right + 1] - pfSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */