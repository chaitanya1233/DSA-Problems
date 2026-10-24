class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<int> v;
        
        unordered_map<int,int> mp;
        int idx1 = -1;
        int idx2 = -1;

        for(int i = 0;i<n;i++)
        {
            mp[nums[i]] = i;
        }

        for(int i = 0;i<n;i++)
        {
            int need = target - nums[i];

            if(mp.count(need) && mp[need] != i)
            {
                idx1 = i;
                idx2 = mp[need];

                break;
            }
        }
        return {idx1,idx2};
        

    }
};  