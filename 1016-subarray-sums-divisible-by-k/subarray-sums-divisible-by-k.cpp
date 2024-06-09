#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> prefixModCount;
        prefixModCount[0] = 1; // Base case: prefix sum of 0 (empty subarray) is divisible by k
        
        int prefixSum = 0;
        int count = 0;
        
        for (int num : nums) {
            prefixSum += num;
            int mod = (prefixSum % k + k) % k; // Ensure the modulo is positive
            
            if (prefixModCount.find(mod) != prefixModCount.end()) {
                count += prefixModCount[mod];
            }
            
            prefixModCount[mod]++;
        }
        
        return count;
    }
};
