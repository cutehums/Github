#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int isExist = 0;

    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int p; cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    int M; cin >> M;
    for (int i = 0; i < M; i++){
        int s; cin >> s;
        int begin = 0; int end = v.size()-1;

        while (begin <= end){
            int middle_idx = (begin + end) / 2; 
            if (s == v[middle_idx]){
                isExist = 1;
                break;           
            }
            else if (s > v[middle_idx]){
                begin = middle_idx + 1;
            }
            else {
                end = middle_idx - 1;
            }
        }
        cout << isExist << '\n';
        isExist = 0;
    }

    return 0;
}