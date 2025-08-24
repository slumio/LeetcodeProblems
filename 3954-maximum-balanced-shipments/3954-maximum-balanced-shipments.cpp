class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int ans=0;
        int maxp=0;

        for(auto &x:weight)
        {
            if(maxp>x){ans++;maxp=0;}
            else maxp=max(maxp,x);
        }

        return ans;
    }
};