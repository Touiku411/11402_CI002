#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n)
    {
        int bottles = n;
        int drinks = n;
        while(bottles >= 3){
            int newDrink = bottles / 3;
            drinks += newDrink;
            bottles = bottles % 3 + newDrink;
        }
        if(bottles == 2){
            drinks += 1;
        }
        cout << drinks << endl;
    }
    
}
