class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return (a[1] < b[1]);
    }
    
    int eraseOverlapIntervals(vector<vector<int>> &intervals){
        sort(intervals.begin(), intervals.end(), comp);
        int count = 0;
        int i = 1;
        int lastInterval=intervals[0][1];
        for (; i < intervals.size(); i++)
        {
            if(lastInterval > intervals[i][0])
            {
                count++;
            }
            else
            {
                lastInterval = intervals[i][1];

            }
        }
        return count;
    }
};