class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int zero=0;
        int total=1;
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero++;
                ind=i;
            }
            else
            {
            total *= nums[i];
            }
        }
        
        if(zero>1)
        {
            return ans;
        }
        if(zero == 1)
        {
            ans[ind] = total;
            return ans;
        }
        for(int i=0;i<nums.size();i++)
        {
            ans[i] = total/nums[i];
        }
        return ans;
    }
};