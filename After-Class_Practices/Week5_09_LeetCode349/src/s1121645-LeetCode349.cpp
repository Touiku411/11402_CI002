// AI生成
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen(nums1.begin(), nums1.end());
        unordered_set<int> used;
        vector<int> ans;

        for (int num : nums2) {
            if (seen.count(num) && !used.count(num)) {
                ans.push_back(num);
                used.insert(num);
            }
        }

        return ans;
    }
};
