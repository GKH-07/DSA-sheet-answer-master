class Solution {
public:
    double average(vector<int>& salary)
    {
        int high=INT_MIN;
        int low =INT_MAX;
        for(int i=0;i<salary.size();i++)
        {
            high = max(high,salary[i]);
            low  = min(low,salary[i]);
        }
        double total = 0;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i] != high && salary[i] != low)
                total += salary[i];
        }
        double ans=0;
        ans = total/(salary.size()-2);
        return ans;
        
    }
};