class Solution {
public:
    int maxDistance(vector<int>& arr) {
        int max_length = 0;
        int n = arr.size();
        int left = 0;
        int right= 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != arr[0])
                left = max(i,left);
            if(arr[i] != arr[n-1])
                right = max(right,n-i-1);
            max_length = max(left,right);
        }
        return max_length;
    }
};