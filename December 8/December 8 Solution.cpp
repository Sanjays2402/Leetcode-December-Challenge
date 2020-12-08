class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int count = 0;
        vector<int> arr(60, 0);
        for(int i=0; i<time.size(); i++)
        {
            arr[time[i] % 60]++;
        }
        for(int i=0; i<31; i++)
        {
            int rem = 60 - i;
            if(i == 0 || i == 30)
                count += (arr[i]-1) * (arr[i]) / 2;
            else
                count += arr[rem] * arr[i];
        }
        return count;
        
    }
};
