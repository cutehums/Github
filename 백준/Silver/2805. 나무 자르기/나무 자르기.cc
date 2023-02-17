#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool fun(vector <int> v, long long cut_length, int M){
    long long remain = 0;
    for (auto i : v){
        if (i - cut_length > 0){
            remain += (i - cut_length);
        }
    }
    return remain >= M;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int N; int M; cin >> N >> M;
    for (int i = 0; i < N; i++){
        int s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    long long low = 0; long long high = v[N-1];
    while (low + 1 < high){
        long long mid = (low + high) / 2;
        if (fun(v, mid, M)){
            low = mid;
        }
        else {
            high = mid;
        }
    }

    cout << low;
    


    return 0;
}
