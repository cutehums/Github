#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int L; cin >> L;
    int ans = 0;
    char str[L+1];
    for (int i = 0; i < L; i++){
        char str; cin >> str;
        ans += (str-96) * pow(31, i);
    }
    cout << ans;
    return 0;
}