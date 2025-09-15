class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = z - x;
        int b = z - y;
        if(abs(a) < abs(b)) return 1;
        else if(abs(a) == abs(b)) return 0;
        else return 2; 
    }
};