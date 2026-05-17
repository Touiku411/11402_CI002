#include<iostream>
#include<vector>
using namespace std;

long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right){
    long long cnt = 0;
    int i = left;
    int j = mid + 1;
    int k = left; // for temp
    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++]; 
            cnt += mid - i + 1; 
            // [3 5 8] [1 4 9]
            // mid = arr[2] = 8
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= right){
        temp[k++] = arr[j++];
    }
    for(int i = left; i<= right; ++i){
        arr[i] = temp[i];
    }
    return cnt;
}
long long merge_sort(vector<int>& arr, vector<int>& temp, int left, int right){
    long long cnt = 0;
    if(left < right){
        int mid = left + (right - left) / 2;
        cnt+=merge_sort(arr, temp, left, mid);
        cnt+=merge_sort(arr, temp, mid + 1, right);
        cnt+=merge(arr, temp, left, mid, right);
    }
    return cnt;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n && n != 0){
        vector<int> arr(n);
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        vector<int> temp(n);
        long long res = merge_sort(arr, temp, 0, arr.size() - 1);
        cout << res << '\n';
    }

   
}
