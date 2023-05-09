#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    priority_queue<int> q;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        q.push(t);
    }
    while(!q.empty()){
        cout << q.top() << '\n';
        q.pop();
    }
}