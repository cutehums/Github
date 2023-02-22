#include <iostream>
#include <deque>
#include <queue>

using namespace std;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    queue <int> q;
    deque <int> dq;

    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int qs; cin >> qs;
        if (qs == 0){ // 0일 때 몇번째인지 큐에 넣음
            q.push(i);
        }
    }
    for (int i = 0; i < N; i++){
        int element; cin >> element;
        if (!q.empty()){
            if (q.front() == i){ // 큐일때만 덱에 넣음
                dq.push_back(element);
                q.pop();
            }
        }
        else {
            continue;
        }
        
    }
    int M; cin >> M;
    while (M--){
        int insert_element; cin >> insert_element;
        dq.push_front(insert_element);
        cout << dq.back() << " ";
        dq.pop_back();
    }





    return 0;
}
