class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        int count=0;
        unordered_map<int, int> hash;
        for(int i: A)
            for(int j: B)
                hash[i + j] ++;
        
        for(int i: C)
            for(int j: D)
                if(hash[-(i + j)])
                    count += hash[-(i + j)];
        
        return count;
    }
};
