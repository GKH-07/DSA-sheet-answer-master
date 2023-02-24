class Solution {
public:
void solve(vector<int> nums,vector<vector<int>> &ans,int index)
{
    if(index >= nums.size())
    {
    ans.push_back(nums);
    return;
    }
    for(int i=index;i<nums.size();i++)
    {
        //if(nums[i] == nums[i+1])continue;
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        // backtrack
        swap(nums[index],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
    }
};