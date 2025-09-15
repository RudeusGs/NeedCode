class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n = aliceSizes.size();
        int m = bobSizes.size();
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int newA = sumA - aliceSizes[i] + bobSizes[j];
                int newB = sumB - bobSizes[j] + aliceSizes[i];
                if (newA == newB) {
                    return {aliceSizes[i], bobSizes[j]};
                }
            }
        }
        return {};
    }
};
