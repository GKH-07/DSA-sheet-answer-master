class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        int i = 0;
        int sum=1;
        int start =0;
        while(i<nums.size() )
        {
           sum *= nums[i];
           while(sum >= k && start <= i)
           {
               sum /= nums[start];
               start++;
           }
           cnt += i - start + 1;
           i++;
        }
        return cnt;
    }
};