class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // for(int i = 0;i < nums.size();i++)
        // {
        //     i nt need = target - nums[i];
        //     for(int j = i+1;j<nums.size();j++)
        //     {
        //         if(nums[j] == need)
        //         {
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};
        int n = nums.size();
        int idx = -1;
        int idx2 = -1;
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i = 0;i<n;i++)
        {
            int need = target - nums[i];
            if(mp.count(need))
            {
                idx = i;
                idx2 = mp[need];
                break;
            }
            mp[nums[i]] = i;
        }
       return {idx,idx2};

    }
};  