class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> a(n, vector<int> (n, 0));
        int left=0, right=n-1, top=0, bottom=n-1, k=1, i;
        
        while(top <= bottom)
        {
            for(i=left; i<=right; i++)
                a[top][i] = k++;
            top++;
            for(i=top; i<=bottom; i++)
                a[i][right] = k++;
            right--;
            for(i=right; i>=left; i--)
                a[bottom][i] = k++;
            bottom--;
            for(i=bottom; i>=top; i--)
                a[i][left] = k++;
            left++;
        }
        return a;
    }
};
