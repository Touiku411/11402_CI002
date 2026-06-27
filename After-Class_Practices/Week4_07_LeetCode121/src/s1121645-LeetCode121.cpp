// AI生成
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int ans = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            ans = max(ans, price - minPrice);
        }

        return ans;
    }
};
