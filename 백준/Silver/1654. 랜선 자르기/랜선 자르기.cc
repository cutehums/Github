#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool lan_count(vector <long long> v, int length, int N){
    long long cnt = 0;
    for (auto i : v){
        cnt += i / length;
    }
    return N <= cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(0);
    vector <long long> v;
    int K; int N; cin >> K >> N;
    for (int i = 0; i < K; i++){
        long long s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    long long low = 1; long long high = v[K-1];
    while (low + 1 < high){
        long long mid = (low + high) / 2;
        if (lan_count(v, mid, N)){
            low = mid;
        }
        else {
            high = mid;
        }
    }
    if (lan_count(v, high, N)){
        cout << high;
    }
    else {
        cout << low;
    }


    return 0;
}

