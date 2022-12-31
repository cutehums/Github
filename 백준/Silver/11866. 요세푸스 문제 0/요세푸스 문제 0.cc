#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int main(){
    int N; int K; cin >> N >> K;
    vector <int> v;
    queue <int> q;
    for (int i = 1; i < N+1; i++){
        v.push_back(i);
    }

    int idx = K - 1;
    q.push(v[idx]);
    v.erase(v.begin() + idx);
    idx--;
    while (!(v.empty())){
        idx += K;
        while (idx > v.size()-1){
            idx -= v.size();
        }
        q.push(v[idx]);
        v.erase(v.begin() + idx);
        idx--;
    }
    cout << "<";
    while (!(q.empty())){
        if (q.size() == 1){
            cout << q.front();
            q.pop();
        }
        else{
            cout << q.front() << ", ";
            q.pop();
        }
    }
    cout << ">";
    
    return 0;
}