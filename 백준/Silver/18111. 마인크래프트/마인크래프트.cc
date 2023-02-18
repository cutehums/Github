#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// bool cmp(pair <long long, int> a, pair <long long, int> b){
//     if (a.first == b.first){
//         return a.second >= b.second;
//     }
//     return a.first < b.first;

// }

struct cmp{
    bool operator()(pair <long long, int> a, pair <long long, int> b){
        if (a.first == b.first){
            if (a.second <= b.second){
                return true;
            }
            else {
                return false;
            }
        }
        else if (a.first > b.first){
            return true;
        }
        else {
            return false;
        }
        
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int N, M; long long B; cin >> N >> M >> B;
    for (int i = 0; i < N * M; i++){
        int s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    int highest = v[N * M - 1];
    int lowest = v[0];
    
    priority_queue <pair <long long, int>, vector <pair <long long, int>>, cmp> time_high;
    for (int i = lowest; i <= highest; i++){
        long long time = 0;
        long long inventory = B;
        for (auto j : v){
            if (j > i){ // 땅을 깎을 때
                time += (2 * (j - i));
                inventory += (j - i);
            }
            else if (j < i){ // 땅을 쌓을 때
                    time += (i - j);
                    inventory -= (i - j);
            }    
        }
        if (inventory >= 0){
            time_high.push({time, i});
        }

    }



    cout << time_high.top().first << ' ' << time_high.top().second;
    return 0;
}
