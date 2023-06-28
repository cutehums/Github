#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;

    unordered_map <string, string> m;
    while (N--){
        string address, password; cin >> address >> password;
        m.insert({address, password});
    }
    while (M--){
        string address; cin >> address;
        cout << m.at(address) << '\n';
    }

    return 0;
}

