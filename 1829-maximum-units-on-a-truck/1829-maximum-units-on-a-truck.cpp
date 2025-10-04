class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res = 0;
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b){
            return a[1] > b[1];
        });
        for(auto i : boxTypes){
            int take = min(truckSize, i[0]); 
            res += take * i[1];
            truckSize -= take;
            if(truckSize == 0) break;
        }
        return res;
    }
};