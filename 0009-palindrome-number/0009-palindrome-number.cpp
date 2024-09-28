class Solution {
public:
    bool isPalindrome(int x) {
        long long copy = x;
        long long revNum = 0;
        while(x > 0) {
            long long lastDigit = x % 10;
            revNum = (revNum * 10) + lastDigit;
            x = x / 10;
        }
        if(revNum == copy) return true;
        return false;
    }
};