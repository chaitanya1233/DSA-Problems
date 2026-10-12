class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int count = -1;
        for(int i = 0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }

        for(int i = 0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }

        return ans;
        
    }
};