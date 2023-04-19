class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int curr_prod = 1;
        int max_prod  = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr_prod *= nums[i];
            max_prod = max(curr_prod,max_prod);
            if(curr_prod == 0)
            {
                curr_prod = 1;
            }
        }
        curr_prod = 1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            curr_prod *= nums[i];
            max_prod = max(curr_prod,max_prod);
            if(curr_prod == 0)
            {
                curr_prod = 1;
            }
        }
        return max_prod;
    }
};