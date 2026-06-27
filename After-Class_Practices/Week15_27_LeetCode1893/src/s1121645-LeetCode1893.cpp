// AI生成
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> diff(52, 0);

        for (vector<int>& range : ranges) {
            ++diff[range[0]];
            --diff[range[1] + 1];
        }

        int current = 0;
        for (int i = 1; i <= 50; ++i) {
            current += diff[i];
            if (left <= i && i <= right && current == 0) {
                return false;
            }
        }

        return true;
    }
};
