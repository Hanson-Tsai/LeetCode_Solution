class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> info;
        
        for(int i=0; i<n; i++){
            info.push_back({position[i], speed[i]});
        }
        
        sort(info.begin(), info.end());
        
        double time = 0;
        int idx = n-1;
        int ans = 0;
        
        while(idx >= 0){
            double t = (double)(target-info[idx].first)/info[idx].second;
            if(t > time){
                time = t;
                ans += 1;
            }
            idx--;
        }
        
        return ans;
    }
};