class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        
        int low = 1, high = 0;
        for(int i=0; i<n; i++){
            high = max(high, piles[i]);
        }
        
        int result = high;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            long int hours = 0;
            for(int i=0; i<n; i++){
                hours += ceil((double)piles[i]/mid);
            }
            
            if(hours <= h){
                result = min(result, mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return result;
    }
};