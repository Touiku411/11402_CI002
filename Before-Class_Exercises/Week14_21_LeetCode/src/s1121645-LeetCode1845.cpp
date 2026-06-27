// AI生成
class SeatManager {
public:
    SeatManager(int n) {
        for (int i = 1; i <= n; ++i) {
            seats.push(i);
        }
    }

    int reserve() {
        int seat = seats.top();
        seats.pop();
        return seat;
    }

    void unreserve(int seatNumber) {
        seats.push(seatNumber);
    }

private:
    priority_queue<int, vector<int>, greater<int>> seats;
};
