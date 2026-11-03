class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // int profit = 0;
        // int n = prices.size();

        // for(int i=0;i<n;i++)
        // {
            
        //     for(int j = i+1;j<n;j++)
        //     {
        //         int current_profit = 0;
        //         if(prices[j] > prices[i])
        //         {
        //             current_profit = prices[j] - prices[i];
        //             profit = max(profit,current_profit);
        //         }
        //     }
        // }

        // if(profit > 0)
        // {
        //     return profit;
        // }
        // else
        // {
        //     return 0;
        // }


        // What if instade of looking for selling day
        //  where price is minimum we will try sell the stock on samee day

        int selling  =  prices[0];
        
        int n = prices.size();
        int profit = 0;
        for(int buy = 1; buy < n;buy++)
        {
            profit = max(profit,prices[buy] - selling);
            selling = min(selling, prices[buy]);
        }

        return profit;
    }
};