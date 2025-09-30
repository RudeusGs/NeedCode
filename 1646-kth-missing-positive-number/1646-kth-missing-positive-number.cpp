class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size() + k;
        vector<int> v;
        int j = 0;
        for(int i = 1; i <= n; i++){
            if(j < arr.size() && arr[j] == i){
                j++;        
            }else{
                v.push_back(i);
            }
        }
        return v[k - 1];
    }
};