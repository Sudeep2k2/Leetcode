class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss = -1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != i)
            {
                miss =  i;
               break;
            }
        }
        if(miss!= -1)
        {
            return miss;
        }
        else
        {
            return nums.size();
        }
    }
};