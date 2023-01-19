#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int ans = 1;
    for (int i = 0; i < N; i++){
        ans = ans * (N - i); 
    }

    cout << ans;
    return 0;
}

