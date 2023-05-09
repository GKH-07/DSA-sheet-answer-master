class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
     unordered_map<int,int> m;
     for(auto it : nums)
     {
         m[it]++;
     }   
    for(int i=0;i<nums.size();i++)
    {
        if(m[nums[i]] == 1)
        {
            return nums[i];
        }
    }
    return 0;
    }
};