class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int count_neg = 0;
        int count_zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                count_neg++;
            }
            if(nums[i]==0)
            {
                count_zero++;
            }
        }
        if(count_zero)return 0;
        if(count_neg % 2 !=0)return -1;
        return 1;
    }
};