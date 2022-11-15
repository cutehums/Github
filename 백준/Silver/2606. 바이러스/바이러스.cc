#include <iostream>
#include <queue>
using namespace std;
int count, n;
bool computer[101][101], chk[101];

void BFS() {
    queue<int> q;
    q.push(1);
    chk[1] = 1;
    while(!q.empty()) {
        for(int i = 1; i <= n; i++) {
            if(computer[q.front()][i] && !chk[i]) {
                chk[i] = 1;
                q.push(i);
                count++;
            }
        }
        q.pop();
    }
}

int main() {
    int m;
    cin >> n >> m;
    while(m--) {
        int a,b;
        cin >> a >> b;
        computer[a][b] = 1;
        computer[b][a] = 1;
    }
    BFS();
    cout << count;
}