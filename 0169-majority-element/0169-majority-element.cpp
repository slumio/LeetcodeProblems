class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ans;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {    
            if(cnt==0){ans=nums[i];}
            if(nums[i]!=ans)cnt--;
            else cnt++;

            

        }

        return ans;
    }
};