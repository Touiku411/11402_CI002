#include<bits/stdc++.h>
using namespace std;

void bst(vector<int>& v, int left, int right){
    if(left > right){
        return;
    }
    int pivot = v[left];
    int k = left + 1;
    while(k <= right && v[k] < pivot){
        k++;
    }
    bst(v, left + 1, k - 1);
    bst(v, k, right);
    cout << pivot << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int val;
    vector<int> vec;
    while(cin >> val){
        vec.push_back(val);
    }
    bst(vec, 0, vec.size() - 1);
    return 0;
}