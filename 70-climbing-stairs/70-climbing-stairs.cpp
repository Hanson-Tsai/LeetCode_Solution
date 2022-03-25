class Solution {
public:
    // DP O(N)
    int climbStairs(int n) {
        int pre1 = 2;
        int pre2 = 1;
        int res = 0;
        
        if(n <= 2)return n;
        else{
            for(int i=3; i<=n; i++){
                res = pre1 + pre2;
                pre2 = pre1;
                pre1 = res;
                
            }
            return res;
        }
        
    }
};