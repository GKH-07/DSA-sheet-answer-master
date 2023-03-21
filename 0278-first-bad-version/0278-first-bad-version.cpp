class Solution {
public:
    int firstBadVersion(int n) 
    {
        int right=n;
        int left =1;
        int mid  =0;
        while(right>left)
        {
            mid = (right-left)/2 + left;
            if(isBadVersion(mid))
                right = mid;
            else left = mid+1;
        }
        return left;
    }
};