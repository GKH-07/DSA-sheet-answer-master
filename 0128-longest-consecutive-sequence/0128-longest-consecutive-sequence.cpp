class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int longestStreak = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(!s.count(nums[i]-1))
            {
                int currNum =nums[i];
                int currStreak = 1;
                
                while(s.count(currNum+1))
                {
                    currNum += 1;
                    currStreak+=1;
                }
                longestStreak = max(longestStreak,currStreak);
            }
        }
        return longestStreak;
    }
};