#include <iostream>

using namespace std;

long long Mod = 1234567891;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int L; cin >> L;
    int ans = 0;
    for (int i = 0; i < L; i++){
        char str; cin >> str;
        int result = str - 96;
        for (int j = 0; j < i; j++){
            result *= 31;
            result %= Mod;
        }
        ans += result;
        ans %= Mod;
    }
    cout << ans;
    return 0;
}