class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;

        unordered_map<int,int> mp;

        for(auto x : nums)
        {
            mp[x]++;
        }

        for(auto  x : nums)
        {
            if(mp[x] > 1)
            {
                flag = true;
                return flag;
            }
        }
        return flag;
    }
};