class Solution {
public:
     const int mod=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        

        for(auto &p:queries)
        {
            

             while(p[0]<=p[1])
             {
                nums[p[0]]=((long long)nums[p[0]]*(long long)p[3])%mod;
                p[0]+=p[2];
             }
        }
        int ans=0;

        for(auto &x:nums)ans^=x;
        return ans;

    
    }
};