class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> s;

        if(n == 1 || n == 0)
        {
            return n;
        }

        for(auto x : nums)
        {
            s.insert(x);
        }
      
      int current = 1;
      int longest = 1;

      int prev = *s.begin();
      for(auto x : s)
      {
        if(x == prev + 1)
        {
            current++;
        }
        else
        {
            longest = max(longest,current);
            current = 1;

        }
        prev = x;
      }
       longest = max(longest,current);

        return longest;

    }
};