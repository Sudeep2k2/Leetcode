class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int single = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            single = single^nums[i];
        }
        return single;
    }
};