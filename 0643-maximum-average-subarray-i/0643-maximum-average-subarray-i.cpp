class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int maxSum = INT_MIN;

        int currentSum = 0;

        for(int i = 0;i<k;i++)
        {
            currentSum += nums[i];
        }

        maxSum = currentSum;


        for(int i = k;i<nums.size();i++)
        {
            currentSum -= nums[i-k];
            currentSum += nums[i];
            maxSum = max(currentSum,maxSum);
        }

        return double(maxSum) / k;
    }
};