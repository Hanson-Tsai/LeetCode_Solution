class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        
        for(auto num:nums){
            table[num]++;
        }
        
        vector<int> result;
        priority_queue<pair<int, int>> pq;
        
        for(auto i=table.begin(); i!=table.end(); i++){
            pq.push(make_pair(i->second, i->first));
            if(pq.size() > (int)table.size() - k){
                result.push_back(pq.top().second);
                pq.pop();
            }
        }
        
        return result;
    }
};