#include <iostream>
using namespace std;

int pow(int bottom, int indices){
    int result = 1;
    while (indices != 0){
        result *= bottom;
        indices--;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int Mod = 1234567891;
    int L; cin >> L;
    int ans = 0;
    for (int i = 0; i < L; i++){
        char str; cin >> str;
        ans = ans + ((int)((str-96) * pow(31, i)));
        ans %= Mod;
    }
    cout << ans;
    return 0;
}