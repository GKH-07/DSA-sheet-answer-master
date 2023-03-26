class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int size = s.length();
        if(size < 2) return size;
        int ch_count[128]{0};
        int l = 0, r = 0, maxLen=1;
        while(r < s.length())
        {
            if(ch_count[s[r]]++ > 0)
            {            
                maxLen = max(r-l, maxLen);
                while(ch_count[s[r]] != 1) ch_count[s[l++]]--;
            }
            r++;
        }
        maxLen = max(maxLen, r-l);
        return maxLen;
    }
};