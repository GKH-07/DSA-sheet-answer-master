class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length()!=t.length())return false;
        
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]] != m2[t[i]])
                return false;
        }
        return true;
    }
};