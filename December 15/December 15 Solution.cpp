class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=0, j=nums.size()-1;
        vector<int> res;
        while(i <= j)
        {
            if(pow(nums[i], 2) > pow(nums[j], 2))
                res.push_back(pow(nums[i++], 2));
            else
                res.push_back(pow(nums[j--], 2));
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};
