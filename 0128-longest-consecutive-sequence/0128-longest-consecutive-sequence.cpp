class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //     int n = nums.size();
    //     set<int> s;

    //     if(n == 1 || n == 0)
    //     {
    //         return n;
    //     }

    //     for(auto x : nums)
    //     {
    //         s.insert(x);
    //     }
      
    //   int current = 1;
    //   int longest = 1;

    //   int prev = *s.begin();
    //   for(auto x : s)
    //   {
    //     if(x == prev + 1)
    //     {
    //         current++;
    //     }
    //     else
    //     {
    //         longest = max(longest,current);
    //         current = 1;

    //     }
    //     prev = x;
    //   }
    //    longest = max(longest,current);

    //     return longest;

int n = nums.size();

        if (n == 0) {
            return 0;
        }

        unordered_set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int longest = 0;

        for (int x : s) {
            // Start counting only at the beginning of a sequence
            if (s.find(x - 1) == s.end()) {
                int current = 1;
                int next = x + 1;

                // Count consecutive numbers
                while (s.find(next) != s.end()) {
                    current++;
                    next++;
                }

                longest = max(longest, current);
            }
        }

        return longest;
    }
};