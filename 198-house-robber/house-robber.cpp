class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2)  return nums[0];

        vector<int> mp(nums.size(),0);
        mp[0]=nums[0];
        mp[1]=max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++) mp[i]=max(mp[i-1],nums[i]+mp[i-2]);
        return mp[nums.size()-1];
    }
};