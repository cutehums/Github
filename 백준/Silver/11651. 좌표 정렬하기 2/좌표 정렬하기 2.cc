#include <iostream>
#include <queue>

using namespace std;

struct compare
{
    bool operator()(pair<int, int> a, pair<int, int>b){
        if (a.second == b.second){
            return a.first > b.first;
            }
        else {
            return a.second > b.second;
        }
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue <pair <int, int>, vector <pair <int, int>>, compare> pq;
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int x; int y; cin >> x >> y;
        pq.push({x,y});
    }
    while (N--){
        cout << pq.top().first << ' ' << pq.top().second << '\n';
        pq.pop();
    }

    return 0;
}

