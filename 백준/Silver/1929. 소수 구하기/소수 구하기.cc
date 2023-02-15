#include <iostream>
#include <stack>

using namespace std;

bool isPrime(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; int M; cin >> N >> M;
    while (N <= M){
        if (isPrime(N)){
            cout << N << '\n';
        }
        N++;
    }
    return 0;
}

