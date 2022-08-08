class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> st;
        
        int n = heights.size();
        int maxArea = 0;
        
        for(int i=0; i<n; i++){
            int startIdx = i;
            while(!st.empty() && st.top().second > heights[i]){
                int idx = st.top().first;
                int w = i - idx;
                int h = st.top().second;
                
                maxArea = max(maxArea, w*h);
                startIdx = idx;
                st.pop();
            }
            
            st.push({startIdx, heights[i]});
        }
        
        while(!st.empty()){
            maxArea = max(maxArea, (n-st.top().first)*st.top().second);
            st.pop();
        }
        
        return maxArea;
    }
};