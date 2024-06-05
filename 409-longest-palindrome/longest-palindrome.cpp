
     class Solution {
public:
     int longestPalindrome(string s) {
    if (s.length() <= 1) 
        return s.length();

    map<char, int> mp;
    for (auto i : s) {
        mp[i]++;
    }

    int gg = 0;
    int sum = 0;
    bool hasOdd = false;

    for (auto i : mp) {
        if (i.second % 2 != 0) {
            sum += i.second - 1;
            hasOdd = true;
        } else {
            gg += i.second;
        }
    }
     
    

return hasOdd ? gg + sum + 1 : gg;
 




        
        
     }
};