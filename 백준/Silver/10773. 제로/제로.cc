#include <iostream>
#include <stack>

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0;
    stack <int> s;
    int K; cin >> K;
    while (K--){
        int N; cin >> N;
        if (N){
            s.push(N);
        }
        else {
            s.pop();
        }
    }
    while (!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}

