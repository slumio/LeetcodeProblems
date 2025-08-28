class Solution {
public:


    int mySqrt(int x) {
        

         int low=0;
         int high=1e5;
         int ans=0;

         while(low<=high)
         {
             int mid=(high-low)/2+low;

             if((long long)mid*(long long)mid<=(long long)x)
             {
                low=mid+1;
                ans=mid;
             }
             else 
             {
                high=mid-1;
             }
         }


         return ans;


    }
};