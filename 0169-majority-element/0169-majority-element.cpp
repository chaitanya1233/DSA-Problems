class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = -1;
        unordered_map<int,int> mp;
        int n = nums.size();

        for(auto x : nums)
        {
            mp[x]++;
        }

        for(auto x:nums)
        {
            if(mp[x] > (n/2))
            {
                ans =  x;
            }
        }
        return ans;
    }
};