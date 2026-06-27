// AI生成
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> count;

        for (int num : arr1) {
            ++count[num];
        }

        vector<int> ans;
        for (int num : arr2) {
            while (count[num] > 0) {
                ans.push_back(num);
                --count[num];
            }
        }

        for (auto& p : count) {
            while (p.second > 0) {
                ans.push_back(p.first);
                --p.second;
            }
        }

        return ans;
    }
};
