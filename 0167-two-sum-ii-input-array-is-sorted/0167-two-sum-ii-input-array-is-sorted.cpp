class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int left = 0;
        int right=num.size()-1;
        vector<int> answer;
        for(int i=0;i<num.size();i++){
            if(num[left] + num[right] == target){
                answer.push_back(left+1);
                answer.push_back(right+1);
                return answer;
            }
            if(num[left] + num[right] > target){
                right--;
            }
            if(num[left] + num[right] < target){
                left++;
            }
        }
        return answer;
    }
};