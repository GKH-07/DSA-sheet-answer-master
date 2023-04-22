class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> final;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int start = i+1;
            int end = n-1;
            while(start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == 0)
                {   
                    ans.clear();
                    ans.push_back(nums[i]);
                    ans.push_back(nums[start]);
                    ans.push_back(nums[end]);
                    final.push_back(ans);

                    while(start < end && nums[start] == nums[start+1] )
                        start++;
                    while(start < end && nums[end] == nums[end-1])
                        end--; 

                    start++;
                    end--;
                }
                else if(sum < 0)
                        {start++;}
                    else
                       { end--;}
            }
            while(i<n-1 && nums[i]==nums[i+1])
                i++;
        }
        return final;
    }
};