class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();

        vector<long long>a,b;
        long long sum=0;
        for(int i=0;i<prices.size();i++)
        {
            sum+=prices[i]*strategy[i];
            a.push_back(prices[i]*strategy[i]);
            b.push_back(prices[i]);
        }

      
        
        long long ans=sum;

        for(int i=0;i<n-1;i++)
        {
            a[i+1]+=a[i];
            b[i+1]+=b[i];
        }

        for(int i=0;i<n-k+1;i++)
        {
            long long rem=a[i+k-1]-((i-1<0)?0:a[i-1]);
            long long add=b[i+k-1]-b[i+k-1-k/2];
            ans=max(ans,sum-rem+add);
        }
        
        return ans;


    }
};