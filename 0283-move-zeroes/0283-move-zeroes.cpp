class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> zero;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zero.push_back(0);
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        while(!zero.empty()){
            nums.push_back(zero.back());
            zero.pop_back();
        }
    }
};