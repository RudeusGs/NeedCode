class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int i = right;
        vector<int> v(right+1);
        while(left <= right){
            int a = nums[left] * nums[left], b = nums[right] * nums[right];
            if(a > b){
                v[i] = a;
                left++;
            }
            else{
                v[i] = b;
                right--;
            }
            i--;
        }
        return v;

    }
};