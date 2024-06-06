class Solution {
    public:
        string longestPalindrome(string s) {
                if(s.length() <= 1){
                            return s;
                                    }
                                            int start = 0, max_len = 1;
                                                    for (int i = 0; i < s.length(); ++i) {
                                                                // Find the longest palindrome around center i
                                                                            int left = i, right = i;
                                                                                        while (left > 0 && right < s.length() && s[left - 1] == s[right + 1]) {
                                                                                                        --left;
                                                                                                                        ++right;
                                                                                                                                    }
                                                                                                                                                if (right - left + 1 > max_len) {
                                                                                                                                                                start = left;
                                                                                                                                                                                max_len = right - left + 1;
                                                                                                                                                                                            }

                                                                                                                                                                                                        // Find the longest palindrome around centers i and i+1
                                                                                                                                                                                                                    left = i;
                                                                                                                                                                                                                                right = i + 1;
                                                                                                                                                                                                                                            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                                                                                                                                                                                                                                                            --left;
                                                                                                                                                                                                                                                                            ++right;
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                    if (right - left - 1 > max_len) {
                                                                                                                                                                                                                                                                                                                    start = left + 1;
                                                                                                                                                                                                                                                                                                                                    max_len = right - left - 1;
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                return s.substr(start, max_len);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                    };

