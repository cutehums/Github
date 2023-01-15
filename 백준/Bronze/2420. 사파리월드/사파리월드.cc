#include <iostream>

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long M; long N; cin >> N >> M;

    long ans = N - M;
    if (ans < 0){
        cout << -1 * ans;
    }
    else {
        cout << ans;
    }

    return 0;
}

