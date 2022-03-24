class Solution {
public:
    /*Greedy O(n)
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;      
        int maxProfit = 0, minPrice = prices[0];
    
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i - 1]) {
                maxProfit = max(maxProfit, prices[i] - minPrice);       
            } else {
                minPrice = min(minPrice, prices[i]);
            }
        }   

        return maxProfit;
    }
    */
    // DP Max Subarray
    int maxProfit(vector<int>& prices) {
        int maxCur = 0, maxSoFar = 0;
        for(int i = 1; i < prices.size(); i++) {
            maxCur = max(0, maxCur += prices[i] - prices[i-1]);
            maxSoFar = max(maxCur, maxSoFar);
        }
        return maxSoFar;
    }
    
};