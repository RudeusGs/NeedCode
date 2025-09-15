class Solution {
public:
    bool valid(int x){
        while (x){
            if(x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n){
        for(int i = 1; i < n; i++){
            int j = n - i;
            if(valid(i) && valid(j))
                return {i, j};
        }
        return {};
    }
};