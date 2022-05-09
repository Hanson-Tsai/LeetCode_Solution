class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> table(nums.begin(), nums.end());
        int longest = 0;
        
        for(auto& num:table){
            int curLongest = 1;
            
            for(int i=1; table.count(num-i); i++) table.erase(num-i), curLongest++;
            for(int i=1; table.count(num+i); i++) table.erase(num+i), curLongest++;
            
            if(curLongest > longest) longest = curLongest;
        }
        
        return longest;
    }
};