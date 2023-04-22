class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int> ans;
        if(nums.size() == 1)return {};

        for(int i=0;i<nums.size();i++)
        {
            if(nums[ abs(nums[i])-1 ] < 0)
                ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1] *= -1;
        }
        return ans;
    }
};