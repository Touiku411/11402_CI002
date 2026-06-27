class Solution {
public:
    string decodeString(string s) {
        stack<int> numStk;
        stack<string> strStk;
        int curNum = 0;
        string curStr;

        for (char c : s) {
            if (isdigit(c)) {
                curNum = curNum * 10 + (c - '0');
            } else if (isalpha(c)) {
                curStr += c;
            } else if (c == '[') {
                numStk.push(curNum);
                strStk.push(curStr);
                curNum = 0;
                curStr = "";
            } else if (c == ']') {
                string prev = strStk.top();
                strStk.pop();
                int repeatTimes = numStk.top();
                numStk.pop();

                string temp;
                for (int i = 0 ; i < repeatTimes; ++i) {
                    temp += curStr;
                }
                curStr = prev + temp;
            }
        }
        return curStr;
    }
};
