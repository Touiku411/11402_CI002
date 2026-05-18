class Solution {
private:
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)return false;
        if(n == 1)return true;
        int temp = n;
        while(temp > 1){
            if(temp % 2 != 0)return false;
            temp/=2;
        }
        return true;
    }
};


//1 2 4 8 16 32 64....
