class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();


        vector<pair<int,int>> v;
 
        for(auto x : nums)
        {
            mp[x]++;
        }   


        for(auto x : mp)
        {
            v.push_back({x.first, x.second});
        }

        vector<int> v2;
        sort(v.begin(), v.end(), [](auto a, auto b) {
        return a.second > b.second;
        });
        
        for(int i = 0;i<k;i++)
        {
            v2.push_back(v[i].first);
        }
        return v2;
    }

};