class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWelth = INT_MIN;
        for(auto account: accounts)
        {
            int sum = 0;
            for(auto welth : account)
            {
                sum += welth;
            }
            maxWelth = max(maxWelth,sum);
        }

        return maxWelth;
    }
};