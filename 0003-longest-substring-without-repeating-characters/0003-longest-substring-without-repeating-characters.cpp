class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = -1;
        
        for(int i =0;i<s.size();i++)
        {
            int hash[255] = {0};
            for(int j = i;j<s.size();j++)
            {

                if(hash[s[j]] == 1)
                {
                    break;
                }

                int len =  j - i +1;
                maxlen =  max(len,maxlen);
                hash[s[j]] = 1;
            }
        }
        return maxlen;
    }
};