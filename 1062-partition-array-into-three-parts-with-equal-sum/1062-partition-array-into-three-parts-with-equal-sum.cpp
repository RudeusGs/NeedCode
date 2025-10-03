class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int a = accumulate(arr.begin(), arr.end(), 0);
        if (a % 3 != 0) return false;
        int b = a / 3;
        int sum = 0, count = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(sum == b){
                count++;
                sum = 0;
            }
        }
        return count >= 3;
    }
};