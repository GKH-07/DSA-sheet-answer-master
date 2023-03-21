class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // SO WE HAVE TO FIND THE INDEX OF GREATER THAN OR EQUAL TO TARGET
        int start = 0, end = nums.size() - 1, mid = 0;
        int ans = 0;
        if(target > nums[end]) return end + 1;
        if(target < nums[start]) return 0;
        while(start<=end){
            mid = start + (end - start)/2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};