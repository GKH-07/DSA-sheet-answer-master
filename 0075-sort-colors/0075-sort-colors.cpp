class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        // int low = 0;
        // int high= nums.size()-1;
        // for(int i=0;i<nums.size();)
        // {
        //     if(nums[i]==0)
        //     {
        //         swap(nums[i++],nums[low++]);
        //     }
        //     else if(nums[i]==2)
        //         {
        //             swap(nums[i],nums[high--]);
        //         }
        //     else i++;
        // }
        int i = 0,j=0,k = nums.size()-1;
        while(j<=k){
            if(nums[j]==0){
                swap(nums[i++],nums[j++]);
            }
            else if(nums[j]==2){
                swap(nums[k--],nums[j]);
            }
            else{
                j++;
            }
        } 
    }
};