class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto curr : intervals)
        {
            if(curr[0] <= tempInterval[1])
            {
                tempInterval[1] = max(curr[1],tempInterval[1]);
            }
            else
            {
                ans.push_back(tempInterval);
                tempInterval = curr;
            }
        }
         ans.push_back(tempInterval);

         return ans;
    }
};