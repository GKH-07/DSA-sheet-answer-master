class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int cnt = 0;
        while(i<=j)
        {
            //agr light and heaviest wla saath me aa skte h to,i aur j dono ko update kr denge
            if(people[i] + people[j] <= limit)
            {
                i++;
                j--;
            }
            // agr dono saath me nhi aa skte to,sirf heaviest wle ko ek boat de denge 
            else{
                j--;
            }
            
            // dono ne me se jonsa bhi case ho,ek boat to use hogi
            cnt++;
        }
        return cnt;
    }
};