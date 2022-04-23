class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        int dp[n+1];
        dp[0] = 0;
        
        sort(coins.begin(), coins.end());
        
        for(int i=1; i<n+1; i++){
            dp[i] = INT_MAX;
            for(int coin: coins){
                if(coin <=i){
                    if(dp[i-coin] < dp[i])dp[i] = dp[i-coin] + 1;
                }else break;
            }    
        }
        
        if(dp[n] == INT_MAX)return -1;
        else return dp[n];
    }
};