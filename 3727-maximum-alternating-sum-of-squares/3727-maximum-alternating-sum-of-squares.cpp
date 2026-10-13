class Solution {
public:

    // this comparator will help in sorting the elements in desceding order with their absolute value
    static bool comparator(int a, int b)
    {
        return abs(a) > abs(b);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        // sort the elements
        sort(nums.begin(), nums.end(), comparator);
        // calculate the no of elements which will contribute to positve sum
        int k = ceil(n / 2.0);
        long long positiveSum = 0, negativeSum = 0;
        for(int i = 0; i < n; i++)
        {
            long long square = nums[i] * nums[i];
            if(i < k)
            {
                positiveSum += square;
            }
            else
            {
                negativeSum += square;
            }
        }
        // calculate the res
        long long res = positiveSum - negativeSum;
        return res;
    }
};