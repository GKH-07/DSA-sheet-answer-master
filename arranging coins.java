class Solution {
    public int arrangeCoins(int n) {
        return sol(n);
    }
    public int sol(int n)
    {
        long ans = 1;
        long low = 1;
        long high= n;
        while(low <= high)
        {
            long mid = low + (high - low)/2;
            // mid ka matlab completely fill hai
            long sum = (mid * (mid + 1))/2;
            // is condition ka matb -> coin saare fill hoge aur 
            // ek bhi row bhi khali nhi hai
            if(sum == n)
            {
                return(int) mid;
            }
            if(sum < n)
            {
                ans = mid;
                low = mid+1;
            }
            else if(sum > n)
            {
                high = mid - 1;
            }
        }
            return (int)ans;
        
    }
}