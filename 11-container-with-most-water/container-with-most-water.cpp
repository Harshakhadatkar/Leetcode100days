class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int n = height.size();

        int i = 0;
        int j = n - 1;

        while (i < j) {
            int h = min(height[i], height[j]);
            ans = max(ans, (j - i) * h);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return ans;
    }
};
