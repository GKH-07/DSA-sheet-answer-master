class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int best=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            // best=max(curr,best);
            if(curr>best)best=curr;
            if(curr<0)curr=0;
        }
        return best;
    }
};