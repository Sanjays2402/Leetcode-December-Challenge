class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        bool flag = false;
        int i = 0;
        while(i<arr.size()-1 && arr[i] < arr[i+1])
        {
            flag = true;
            i++;
        }
        if(!flag)
            return false;
        
        while(i<arr.size()-1 && arr[i] > arr[i+1])
        {
            flag = false;
            i++;
        }
        
        return (!flag && i == arr.size()-1);
    }
};
