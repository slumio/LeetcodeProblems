class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;

        for(int i=digits.size()-1;i>=0;i--)
        {
             digits[i]+=carry;
            
             carry=digits[i]/10;
              digits[i]%=10;
        }

        if(carry)
        {   reverse(digits.begin(),digits.end());
            digits.push_back(1);
             reverse(digits.begin(),digits.end());
        }

        return digits;
    }
};