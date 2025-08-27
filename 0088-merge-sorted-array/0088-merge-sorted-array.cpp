class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // so in this question i have prepared to follow ups means explain them brute force and then explain them how will u shift the array and then how will u do it
        int place=m+n-1;

        if(nums2.size()==0)return ;
        if(nums2.size()==nums1.size())
        {
            nums1=nums2;
        }

    
      int i=m-1;
      int j=n-1;

        
        int start=n+m-1;
        while(start>=0)
        {
            if(j<0)nums1[start]=nums1[i--];
            else if(i<0)nums1[start]=nums2[j--];
            else if(nums1[i]<nums2[j]){nums1[start]=nums2[j--];}
            else {nums1[start]=nums1[i--];}

            start--;
        }


       return ;



    }
};