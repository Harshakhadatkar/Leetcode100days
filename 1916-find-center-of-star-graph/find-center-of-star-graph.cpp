class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;

        unordered_map<int, int> mp;
        for(auto edge : edges){
            mp[edge[0]]++;
            mp[edge[1]]++;
        }

        int center = -1;
        for(auto it : mp){
            if(it.second == n-1){
                center = it.first;
                break;
            }
        }
        
        return center;
    }
};
