#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <pair <int, int>> v;
    int rank = 1;
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int h; int w; cin >> h >> w;
        v.push_back({h, w});
    }

    for (int j = 0; j < N; j++){
        for (int i = 0; i < N; i++){
            if (v[j].first < v[i].first && v[j].second < v[i].second){
                rank++;
            }

        }
        cout << rank << ' ';
        rank = 1;
    }
    

    return 0;
}

