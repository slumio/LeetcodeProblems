class Solution {
public:
    int trailingZeroes(int n) {
        
        int p=0;
        int sp=5;
        while(sp<=n)
        {
            p+=n/sp;
            sp*=5;
        }

        return p;

    }
};