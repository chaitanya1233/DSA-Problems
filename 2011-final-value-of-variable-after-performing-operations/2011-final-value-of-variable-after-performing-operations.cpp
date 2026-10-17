class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto p : operations)
        {
            if(p == "--X")
            {
                --x;
            }
            else if(p == "X++")
            {
                x++;
            }
            else if(p == "++X")
            {
                ++x;
            }
            else
            {
                x--;
            }
        }
        return x;
    }
};