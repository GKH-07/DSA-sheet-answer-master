class Solution {
public:    
    // helper function
    void solve(int index,string s,vector<string> &path,vector<vector<string>> &result)
    {
        // mtlb hum partition krte hue end tk pahunch gae hai,to hum u path ko result me daal denge
        if(index == s.size())
        {
            result.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(palindrome(s,index,i))
            {
                path.push_back(s.substr(index,i-index+1));
                solve(i+1,s,path,result);
                // we are poping,bcz we are backtracking here,and go up in recurssion tree
                path.pop_back();
            }
        }
    }
    bool palindrome(string s,int start,int end)
    {
        while(start <= end)
        {
            if(s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
    // main function
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> result;
        vector<string> path;
        solve(0,s,path,result);
        return result;
    }
};