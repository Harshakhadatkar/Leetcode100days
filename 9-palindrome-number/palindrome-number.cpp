class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long long reversed =0;
        int temp =x;
        while(temp  != 0){
            int digit = temp% 10;
            reversed = reversed * 10 + digit;
            temp = temp/10;


        }
        if(reversed == x){
            return true;
        }
        return false;
    }
};