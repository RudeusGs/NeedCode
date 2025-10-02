class Solution {
public:
    int minMaxDifference(int num) {
        string nums = to_string(num);
        char temp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != '9'){
                temp = nums[i];
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == temp){
                nums[i] = '9';
            }
        }
        string nums1 = to_string(num);
        char temp1;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] != '0'){
                temp1 = nums1[i];
                break;
            }
        }
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] == temp1){
                nums1[i] = '0';
            }
        }
        return stoi(nums) - stoi(nums1);
    }
};