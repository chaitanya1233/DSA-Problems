class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = 0;
        int pos = -1;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                idx = i;
                return idx;
            }
        }
        

        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] >= target)
            {
                pos = i;
                break;
            }
            else if(i == n-1)
            {
                pos = n;
                break;
            }
        }
        return pos;
    }
};