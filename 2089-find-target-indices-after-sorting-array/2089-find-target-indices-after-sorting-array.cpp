class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int r = 0;r<nums.size();r++)
        {
            if(nums[r] == target)
            {
                v.push_back(r);
            }
            else
            {
                continue;
            }
        }
        return v;
    }
};