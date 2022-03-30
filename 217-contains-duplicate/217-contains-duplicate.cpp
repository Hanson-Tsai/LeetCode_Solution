class Solution {
public:
    //Time:O(N) Space:O(1)
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > unordered_set(nums.begin(), nums.end()).size();
    }
};