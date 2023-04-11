class Solution {
public:
    string removeStars(string s) {
        // stack<char> st;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i] == '*')
        //     {
        //         st.pop();
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        // string ans ="";
        // while(!st.empty())
        // {
        //     ans += st.top();
        //     st.pop();
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;
        int i=0,j=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == '*')
            {
                j--;
            }
            else{
                s[j] = s[i];
                j++;
            }
        }
        return s.substr(0,j);
    }
};