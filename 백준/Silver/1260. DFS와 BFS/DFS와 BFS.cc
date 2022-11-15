#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n, m, v;
bool graph[1001][1001];
bool chk[1001];

void DFS(int start) {
    cout << start << ' ';
    chk[start] = 1;
    for(int i = 1; i <= n; i++) {
        if(graph[start][i] && !chk[i]) DFS(i);
    }
}

void BFS() {
    queue<int> q;
    q.push(v);
    chk[v] = 1;
    while(!q.empty()) {
        cout << q.front() << ' ';
        for(int i = 1; i <= n; i++)
            if(graph[q.front()][i] && !chk[i]) {
                q.push(i);
                chk[i] = 1;
            }
        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> v;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    DFS(v);
    cout << '\n';
    memset(chk, 0, 1001 * sizeof(bool));
    BFS();
}