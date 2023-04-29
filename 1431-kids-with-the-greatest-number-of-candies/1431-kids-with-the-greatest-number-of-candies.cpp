class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int max_cand = 0;
        for(int i=0;i<candies.size();i++)
        {
            max_cand = max(max_cand,candies[i]);
        }
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i] + extraCandies >= max_cand)
            {
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        return ans;
    }
};