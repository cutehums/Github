#include <iostream>
#include <stack>
#include <utility>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack <pair <int, int>> s;
    int N; cin >> N;
    int arr[N];
    fill_n(arr, N, -1);


    for (int i = 0; i < N; i++){
        int A; cin >> A;
        while (1){
            if (!s.empty()){
                if (s.top().first < A){
                    arr[s.top().second] = A;
                    s.pop();
                }
                else {
                    break;
                }
            }
            else {
                break;
            }
        }
        s.push({A,i});
    }

    for (int i : arr){
        cout << i << ' ';
    }

    

    return 0;
}

