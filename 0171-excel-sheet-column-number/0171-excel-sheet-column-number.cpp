class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        long long result = 0;
        
        for (auto c : columnTitle)
            result = result * 26 + (c - 'A' + 1);
        return result;
    }
};