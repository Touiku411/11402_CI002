// AI生成
class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : limit(k) {
        for (int num : nums) {
            add(num);
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > limit) {
            pq.pop();
        }
        return pq.top();
    }

private:
    int limit;
    priority_queue<int, vector<int>, greater<int>> pq;
};
