class Solution {
public:
    int arrangeCoins(int n) {
        int stairs = 0;
        
        while(n >= stairs) {
            n -= stairs;
            stairs += 1;
        }
        return stairs-1;
    }
};
