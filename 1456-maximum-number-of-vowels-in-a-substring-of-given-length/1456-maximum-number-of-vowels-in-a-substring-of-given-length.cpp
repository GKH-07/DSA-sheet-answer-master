class Solution {
public:
    int maxVowels(string s, int k)
    {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int count=0;
        int curr = 0;
        for(int i=0;i<s.length();i++)
        {
            curr += vowels.count(s[i]);
            if(i-k >=0)
                curr -= vowels.count(s[i-k]);
            count = max(count,curr);
        }
        return count;
    }
};