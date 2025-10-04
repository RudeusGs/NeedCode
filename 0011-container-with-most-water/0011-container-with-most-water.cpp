class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = (int)height.size() - 1;
        int res = 0;
        while(l < r){
            int h = min(height[l], height[r]);
            int w = r - l;
            res = max(res, h * w);
            if(height[l] < height[r]) l++;
            else r--;
        }
        return res;
    }
};
