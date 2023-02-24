class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>hm;
        int sum = 0, res = 0;
        hm[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (hm.find(sum-k) != hm.end())
                res += hm[sum-k];
            
            hm[sum]++;
        }
        
        return res;
    }
};