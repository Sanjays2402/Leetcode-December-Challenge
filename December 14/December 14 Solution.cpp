class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        
        vector<string> temp;
        helper(s, temp);
        
        return res;
    }
    void helper(string s, vector<string> temp)
    {
        if(s.size() == 0)
            res.push_back(temp);
        
        for(int i=1; i<=s.size(); i++)
        {
            string left = s.substr(0, i);
            string right = s.substr(i);
            if(left == string(left.rbegin(), left.rend()))
            {
                temp.push_back(left);
                helper(right, temp);
                temp.pop_back();
            }
        }
    }
};
