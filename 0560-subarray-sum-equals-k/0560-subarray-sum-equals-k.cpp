class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n = nums.size();
       unordered_map<int,int> mp;


       int sum = 0;
       int count = 0;
        mp[0] = 1;
       for(auto num : nums)
       {
            sum += num;

            int required = sum - k;

            if(mp.find(required) !=  mp.end())
            {
                count += mp[required];
            }
            mp[sum]++;

       }  

        return count;
    }
};