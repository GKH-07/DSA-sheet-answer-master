class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int n=word1.length();
        int m=word2.length();
        int i=0;
        int j=0;
        string ans;
        int k=0;
        while(i<n && j<m)
        {
            if(k%2 == 0)
            {
                ans += word1[i];
                i++;
            }
            else{
                ans += word2[j];
                j++;
            }
            k++;
        }
        while(i<n)ans+=word1[i++];
        while(j<m)ans+=word2[j++];
        return ans;
    }
};