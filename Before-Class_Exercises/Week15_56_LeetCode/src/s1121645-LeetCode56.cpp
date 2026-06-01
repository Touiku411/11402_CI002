// 0 2  1 4  3 5
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty())return {};
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });
        vector<vector<int>> res;
        for(int i = 0; i < intervals.size(); ++i){
            if( i + 1 < intervals.size() && intervals[i].back() >= intervals[i + 1][0]){
                intervals[i + 1].back() = max(intervals[i].back(), intervals[i + 1].back());
                intervals[i + 1][0]= intervals[i][0];
            }
            else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    } //[1 5] [3 4] -> [1 max(5,4)]
};
