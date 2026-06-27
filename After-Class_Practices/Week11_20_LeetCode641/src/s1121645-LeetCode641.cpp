// AI生成
class MyCircularDeque {
public:
    MyCircularDeque(int k) : data(k), frontIndex(0), count(0) {
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        frontIndex = (frontIndex - 1 + data.size()) % data.size();
        data[frontIndex] = value;
        ++count;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        data[(frontIndex + count) % data.size()] = value;
        ++count;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        frontIndex = (frontIndex + 1) % data.size();
        --count;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        --count;
        return true;
    }

    int getFront() {
        return isEmpty() ? -1 : data[frontIndex];
    }

    int getRear() {
        return isEmpty() ? -1 : data[(frontIndex + count - 1) % data.size()];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == data.size();
    }

private:
    vector<int> data;
    int frontIndex;
    int count;
};
