class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)return 1;
        map<int, int> mp1, mp2;
        for(auto a: trust) {
            mp1[a[0]]++;
            mp2[a[1]]++;
        }
        for(int i=1; i<=n; i++) {
            if(mp1[i] == 0 and mp2[i] == n-1) {
                return i;
            }
        }
        // for(auto i : mp2)
        // {
        //     if(i.second == n-1 && mp1[i.first] == 0)
        //     {
        //         return i.first;
        //     }
        // }
        return -1;
        
        
    }
};