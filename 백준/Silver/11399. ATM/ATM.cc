#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> v;
    int total = 0;
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int p; cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for (auto i : v){
        total += (i * N--);
    }
    cout << total;

    return 0;
}

