#include <iostream>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int cnt = -1;
    for (int i = N / 5; i >= 0; i--){
        
        int five_kg_num = i;
        int remain = (N - (5 * i));
        if (remain % 3 == 0){
            int three_kg_num = remain / 3;
            cnt = cnt + five_kg_num + three_kg_num + 1;
            break;
        }
        
    }
    cout << cnt;
    return 0;
}

