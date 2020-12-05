class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int m = flowerbed.size();
        if(m == 0)
            return false;
        if(m == 1)
        {
            if(n == 0)
                return true;
            if(n > 1 || flowerbed[0] == 1)
                return false;
            return true;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            flowerbed[0] = 1;
            n--;
        }
        for(int i=2; i<m-2; i++)
        {
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
            {
                n--;
                flowerbed[i] = 1;
            }
        }
        if(flowerbed[m-1] == 0 && flowerbed[m-2] == 0)
        {
            flowerbed[m-1] = 1;
            n--;
        }
        return n <= 0;
    }
};
