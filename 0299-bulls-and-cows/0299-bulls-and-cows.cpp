class Solution {
public:
    string getHint(string secret, string guess) 
    {
        vector<int> s(10);
        vector<int> g(10);
        int bulls=0;
         for(int i=0;i<secret.size();i++)
         {
             if(secret[i] == guess[i])
             {
                bulls++;
             }
             else{
                 s[secret[i]-'0']++;
                 g[guess[i]-'0']++;
             }
         }
            int cows=0;
             for(int i=0;i<10;i++) // kyuki 0 to 9,only 10 char hi h bs
             {
                 cows += min(s[i],g[i]);
             }
             string ans = "";
             ans += to_string(bulls);
             ans += "A";


             ans += to_string(cows);
             ans += "B";
         return ans;
    }
}; 