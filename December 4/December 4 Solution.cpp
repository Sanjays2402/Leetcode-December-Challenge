class Solution {
public:
    int kthFactor(int n, int k) {
        
        int ct = 0 ;
        for(int i=1; i<=n; i++)
        {
            if(n % i == 0)
                ct++;
            if(ct == k)
                return i;
        }
        return -1;
    }
};
