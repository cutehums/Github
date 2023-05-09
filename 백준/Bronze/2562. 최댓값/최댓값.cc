#include <iostream>
#include <vector>


using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int max = 0; int cnt = 1;
    vector <int> v;
    
    for (int i = 0; i < 9; i++){
        cin >> n;
        v.push_back(n);
        if (max < n){
            max = n;
        }
    }
    cout << max << '\n';
    for (auto i : v){
        if (max == i){
            cout << cnt;
        }
        cnt++;
    }
}

