// AI生成
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> values;

        for (int num : nums) {
            values.push_back(to_string(num));
        }

        sort(values.begin(), values.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });

        if (values[0] == "0") {
            return "0";
        }

        string ans;
        for (const string& value : values) {
            ans += value;
        }

        return ans;
    }
};
