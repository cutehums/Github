#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    vector <string> v;
    map <string, int> m;
    while (N--){
        string not_listen; cin >> not_listen;
        m.insert({not_listen, 1});
    }
    while (M--){
        string not_see; cin >> not_see;
        if (m.find(not_see) != m.end()){ // 듣보잡일때
            v.push_back(not_see);
        }
    }
    sort(v.begin(), v.end());
    // for (auto i : m){
    //     cout << i.first << ' ' << i.second << '\n';
    // }
    cout << v.size() << '\n';
    for (auto i : v){
        cout << i << '\n';
    }
    return 0;
}

