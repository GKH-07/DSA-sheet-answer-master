class Solution {
public:
    int kthFactor(int n, int k)
    {
        vector<int> factors;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i == 0)factors.push_back(i);
        }
        factors.push_back(n);
        for(int i=0;i<factors.size();i++)
        {
            cout<<factors[i]<<" ";
        }
        cout<<endl;
        if(factors.size()>=k)
            return factors[k-1];
        return -1;
    }
};