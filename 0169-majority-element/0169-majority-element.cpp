class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi = 0;
        for (auto i : m)
        {
            if(i.second>(nums.size()/2))
            {
                maxi = i.first;
            }
        }
        return maxi;
    }
};