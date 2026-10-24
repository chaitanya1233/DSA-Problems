class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool flag = false;

        if(s.size()!=t.size())
        {
            return flag;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

       if(s == t)
       {
         return true;
       }
       else
       {
        return false;
       }
    }   
};

