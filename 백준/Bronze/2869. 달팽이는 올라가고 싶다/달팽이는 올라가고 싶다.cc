#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A; int B; int V; cin >> A >> B >> V;
    int distance = V - A;
    int One_night = A - B;
    int cnt_day = ceil((double) distance / (double) One_night) + 1;

    if (distance == 0){
        cout << "1";
    }
    else {
        cout << cnt_day;
    }
    
    return 0;
}