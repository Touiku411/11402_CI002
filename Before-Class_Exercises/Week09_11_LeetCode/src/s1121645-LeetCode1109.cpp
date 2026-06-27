// AI生成
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n + 1, 0);

        for (vector<int>& booking : bookings) {
            int first = booking[0] - 1;
            int last = booking[1];
            int seats = booking[2];
            diff[first] += seats;
            diff[last] -= seats;
        }

        vector<int> ans(n);
        int current = 0;
        for (int i = 0; i < n; ++i) {
            current += diff[i];
            ans[i] = current;
        }

        return ans;
    }
};
