// AI生成
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int student : students) {
            q.push(student);
        }

        int index = 0;
        int skipped = 0;

        while (!q.empty() && skipped < q.size()) {
            if (q.front() == sandwiches[index]) {
                q.pop();
                ++index;
                skipped = 0;
            } else {
                q.push(q.front());
                q.pop();
                ++skipped;
            }
        }

        return q.size();
    }
};
