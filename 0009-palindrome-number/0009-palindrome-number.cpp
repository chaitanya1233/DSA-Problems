class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long num = 0; 

        if(x < 0)
        {
            return false;
        }

        while(temp != 0)
        {
            int digit = temp % 10;
            num = (num * 10) + digit;
            temp = temp/10;
        }

        if(x == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};