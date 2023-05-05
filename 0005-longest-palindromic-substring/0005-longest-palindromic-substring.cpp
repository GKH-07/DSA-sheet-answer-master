class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n=s.length();
        int low=0;
        int high=0;
        int start=0;
        int maxlength=1;

        for(int i=0;i<n;i++)
        {
            // even
            low = i-1;
            high= i;
            while(low>=0 && high<n && s[low] == s[high])
            {
                
                if(high-low+1>maxlength)
                {
                    start = low;
                    maxlength = high-low+1;
                }
                low--;
                high++;
            }

            //odd
            low = i-1;
            high= i+1;
            while(low>=0 && high<n && s[low] == s[high])
            {
                
                if(high-low+1>maxlength)
                {
                    start = low;
                    maxlength = high-low+1;
                }
                low--;
                high++;
            }

        }
        string result="";
        for(int i=start;i<start+maxlength;i++)
        {
            result += s[i];
        }
        return result;
    }

};