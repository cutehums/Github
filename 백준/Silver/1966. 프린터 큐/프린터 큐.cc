#include <iostream>
#include <queue>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k; cin >> k;
    while (k--){
        queue <pair<int, int>> q;
        priority_queue <int, vector <int>> importance_queue;        
        int N; int M; cin >> N >> M;
        for (int i = 0; i < N; i++){
            int importance; cin >> importance;
            importance_queue.push(importance);
            if (i == M){
                q.push({1, importance});
            }
            else {
                q.push({0, importance});
            }            
        }
        int cnt = 0;
        while (1){
            if (q.front().second == importance_queue.top()){ // 중요도가 높을 때
                if (q.front().first == 1){
                    cnt++;
                    break;
                }
                else {
                    q.pop();
                    importance_queue.pop();
                    cnt++;
                }
            }
            else { // 중요도가 낮을때
                q.push(q.front());
                q.pop();
            }
        }
        cout << cnt << '\n';
        
    }




    return 0;
}

