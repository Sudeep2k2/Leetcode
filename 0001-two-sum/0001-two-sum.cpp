class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> index;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j] == target - nums[i])
                {
                    index.push_back(i);
                    index.push_back(j);
                }
            }
        }
        return index;
    }
};