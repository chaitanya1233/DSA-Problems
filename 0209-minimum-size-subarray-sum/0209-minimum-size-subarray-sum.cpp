class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windowSum = 0;
        int n = nums.size();
        int minLen = n+1;

        int l = 0,r = 0;

        while(r < n)
        {   
            windowSum += nums[r];

            while(windowSum >= target)
            {
                minLen = min(minLen,r-l+1);

                windowSum -= nums[l];
                l++;
            }   
            r++;
        }
        
        if(minLen != n+1)
        {
            return minLen;
        }
        else
        {
            return 0;
        }
    }
};