#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    vector<int>v;
    while(N--){
        int M; cin >> M;
        v.push_back(M);
        
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }
    
    return 0;
}