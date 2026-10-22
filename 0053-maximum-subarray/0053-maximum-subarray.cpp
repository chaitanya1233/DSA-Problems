class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;


        //  ** Brute Force Approach 
        // for(int i = 0;i<nums.size();i++)
        // {
        //     for(int j = i;j<nums.size();j++)
        //     {
        //         int currentSum = 0;
        //         for(int k = i;k<=j;k++)
        //         {
        //             currentSum += nums[k];
        //         }
        //         maxSum = max(maxSum,currentSum);
        //     }
        // }


        // ** Approach 2 : Timelimit exceeded but correct Approach
        // for(int i = 0;i<nums.size();i++)
        // {
        //     int currentSum = 0;
        //     for(int j = i;j<nums.size();j++)
        //     {
        //         currentSum += nums[j];
        //         maxSum = max(maxSum,currentSum);
        //     }
        // }


        

        int currentSum = 0;
        int previous_Sum = 0;
        int maxNeg = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            currentSum += nums[i];
            maxSum = max(currentSum,maxSum);
            if(currentSum < 0)
            {            
                currentSum = 0;
            }
            
        }
        return maxSum;
    }
};