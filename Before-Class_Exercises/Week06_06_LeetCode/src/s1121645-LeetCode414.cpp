// AI生成
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> values;

        for (int num : nums) {
            values.insert(num);
            if (values.size() > 3) {
                values.erase(values.begin());
            }
        }

        if (values.size() < 3) {
            return *values.rbegin();
        }

        return *values.begin();
    }
};
