#include<bitset>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        bitset <32> bset(n);
        for(int i=0;i<32;i++)
        {
            if(bset[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};