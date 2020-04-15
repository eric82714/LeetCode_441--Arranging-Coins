class Solution:
    def arrangeCoins(self, n: int) -> int:
        stairs = 0
        
        while n >= stairs:
            n -= stairs
            stairs += 1
            
        return stairs-1
