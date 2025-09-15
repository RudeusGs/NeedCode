class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int result = 0;
        int count = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == count){
                result += count;
                count++;
            }
            else{
                break;
            }
        }
       set<int> s(nums.begin(), nums.end());
       int a = result;
       while(s.count(a)){
            a++;
       }
       return a;
    }
};