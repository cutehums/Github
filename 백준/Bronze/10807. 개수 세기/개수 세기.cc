#include <iostream>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map <int,int> m;
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int s; cin >> s;
        if (m.count(s) == 0){
           m.insert({s,1}); 
        }
        else {
            m[s]++;
        }
    }
    int v; cin >> v;
    cout << m[v];
    
    return 0;
}

