#include <iostream>
#include <deque>


using namespace std;

int T, cnt;
deque <char> dq;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    char N;
    for (int k = 0; k < T; k++){
        cin >> cnt;
        for (int i = 0; i < cnt; i++){
            cin >> N;
            if (i == 0){
                dq.push_back(N);
            }

            else {
                if (dq.front() >= N){
                    dq.push_front(N);
                }
                else{
                    dq.push_back(N);
                }
            }
        }
        while (!dq.empty()){
            cout << dq.front();
            dq.pop_front();
        }
        cout << "\n";
    }



    


    return 0;
}