class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxProduct = INT_MIN;

        // int n = nums.size();
        // for(int i = 0;i<nums.size();i++)
        // {
        //     for(int j = i;j<nums.size();j++)
        //     {
        //         int currentProd = 1;
        //         for(int k = i;k<=j;k++)
        //         {
        //             currentProd *= nums[k];
        //         }
        //         maxProduct = max(maxProduct,currentProd);
        //     }
        // }

        int n = nums.size();
        int maxProd = INT_MIN;

        for(int r = 0;r<n;r++)
        {
            int prod  = 1;
            for(int l = r;l<n;l++)
            {
                prod *= nums[l];
                maxProd = max(maxProd,prod);
            }
        }
        return maxProd;
    }
};