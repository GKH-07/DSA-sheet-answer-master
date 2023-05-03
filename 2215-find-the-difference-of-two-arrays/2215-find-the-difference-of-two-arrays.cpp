class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap1;
        unordered_map<int,int> umap2;
        vector<vector<int>> result(2);
        for(int i=0;i<nums1.size();i++)
        {
            umap1[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++)
        {
            umap2[nums2[i]]=1;
        }
        set<int> st;
        for(int i=0;i<nums1.size();i++)
        {
            if(umap2[nums1[i]]==0)
            {
                st.insert(nums1[i]);
            }
        }
       for (auto itr = st.begin(); itr != st.end(); itr++) 
           {
               int t=*itr;
               result[0].push_back(t);
           }
        
       set<int> st1;
        for(int i=0;i<nums2.size();i++)
        {
            if(umap1[nums2[i]]==0)
            {
                st1.insert(nums2[i]);
            }
        }
       for (auto itr = st1.begin(); itr != st1.end(); itr++) 
           {
               int t=*itr;
               result[1].push_back(t);
           }
       return result;       
        
    }
};