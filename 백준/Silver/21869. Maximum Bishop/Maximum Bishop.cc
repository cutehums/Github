#include <iostream>


using namespace std;

int N;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    if (N == 1){
        cout << N << "\n";
    }
    else {
        cout << 2 * (N - 1) << "\n"; 
    }
    // 비숍 배치
    for (int i = 1; i <= N; i++){
        cout << 1 << " " << i << "\n";
    }
    if (N >= 3){
        for (int i = 2; i < N; i++){
            cout << N << " " << i << "\n";
        }        
    }



    



    return 0;
}