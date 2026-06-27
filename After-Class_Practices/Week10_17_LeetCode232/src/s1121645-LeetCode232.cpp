// AI生成
class MyQueue {
public:
    void push(int x) {
        in.push(x);
    }

    int pop() {
        move();
        int value = out.top();
        out.pop();
        return value;
    }

    int peek() {
        move();
        return out.top();
    }

    bool empty() {
        return in.empty() && out.empty();
    }

private:
    stack<int> in;
    stack<int> out;

    void move() {
        if (!out.empty()) {
            return;
        }
        while (!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    }
};
