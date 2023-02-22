#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int two = 0; int five = 0;
    int N; cin >> N;
    while (N != 0){
        int i = N;
        while (i % 2 == 0){
            i /= 2;
            two++;
        }
        while (i % 5 == 0){
            i /= 5;
            five++;
        }
        N--;
    }
    cout << min(two,five);
    return 0;
}

