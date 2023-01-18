class Solution {
public:
    int kadane(vector<int>& nums)
    {
            int curr=0;
            int best=INT_MIN;
            for(int i=0;i<nums.size();i++)
            {
            curr += nums[i];
            best = max(best,curr);
            if(curr<0)
            {
                curr=0;
            }
            }
            return best;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int count_positive=0;
        int orignalsum = kadane(nums);
        for(int i=0;i<n;i++)
        {
            nums[i] = -1 * nums[i];
            if(nums[i] > 0)count_positive++;
        }
        if(count_positive == n)
        {
            return orignalsum;
        }
        int total_sum = 0;
        int minimum_sum=INT_MIN;// best
        int curr=0;
        for(int i=0;i<n;i++)
        {
            curr += nums[i];
            minimum_sum = max(minimum_sum,curr);
            if(curr<0)
            {
                curr=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            total_sum += nums[i];
        }
        int ans = -1*(total_sum - minimum_sum); 
        
        return max(ans,orignalsum);
    }
};