#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int M = N;
    for (int i = 0; i < N; i++){
        for (int j = M; j > 0; j--){
            cout << '*';
        }
        cout << '\n';
        M--;
    }

    return 0;
}

