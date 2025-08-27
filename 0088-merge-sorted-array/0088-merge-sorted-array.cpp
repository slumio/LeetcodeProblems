class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int place=m+n-1;

        if(nums2.size()==0)return ;
        if(nums2.size()==nums1.size())
        {
            nums1=nums2;
        }

       int p=m-1;// last index where there is non zero element in nums1
    
       while(p>=0)
       {
        nums1[place]=nums1[p];
        place--;p--;
       }
      
      
      int i=n;
      int j=0;

        
        int start=0;
        while(i<n+m||j<n)
        {
            if(j>=n)nums1[start]=nums1[i++];
            else if(i>=n+m)nums1[start]=nums2[j++];
            else if(nums1[i]<nums2[j]){nums1[start]=nums1[i++];}
            else {nums1[start]=nums2[j++];}

            start++;
        }


       return ;



    }
};