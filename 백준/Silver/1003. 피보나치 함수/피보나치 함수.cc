#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int memo[41];
int first, second;

int fibo(int n){
    memo[0] = first;
    memo[1] = second;
    for (int i = 2; i <= n; i++){
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        first = 1;
        second = 0;
        int zero_cnt = fibo(N);
        memo[41] = {0,};
        first = 0;
        second = 1;
        int one_cnt = fibo(N);
        cout << zero_cnt << ' ' << one_cnt << '\n';
        // cout << fibo(N) << '\n';
        // cout << memo[8];
    }

    return 0;
}

