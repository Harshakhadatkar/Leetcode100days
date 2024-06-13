// class Solution {
// public:
//     int minMovesToSeat(vector<int>& seats, vector<int>& students) {
//         int ans =0;
//         sort(seats.begin() ,seats.end());
//         int i =0;
//         int j=0;
//         while(seats[i]>0 && students[j] > 0 ){
//             int diff = (seats[i] - students[j]);
//             ans += abs(diff); 
//             i++;
//             j++;

//         }
//         return ans;
//     }
// };

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int n = seats.size();
        for (int i = 0; i < n; ++i) {
            ans += abs(seats[i] - students[i]);
        }
        return ans;
    }
};
