#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t = 0; t < T; ++t){
        if(t > 0)cout << endl;
        int M,N;
        cin >> M >> N;
        
            vector<int> A(M);//add element
            vector<int> u(N);//out when size = u[i]
            for(int i = 0; i < M; ++i){
                cin >> A[i];// 3 1 -4 2 8
            }
            for(int i = 0; i < N; ++i){
                cin >> u[i];
            }
            multiset<int> box;
            int k = 0;
            auto it = box.end();

            for(int i : u){ // 1 2 6 6
                while(box.size() < i){
                    box.insert(A[k]);
                    if(it == box.end()){
                        it--;
                    }
                    else if(A[k] < *it){
                        it--;
                    }
                    k++;
                }
                
                cout << *it << endl;
                it++;
            }

        }
    
    

}
