#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N;
priority_queue <int> pq;
int t;
int largest, second_largest;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    int a;
    for (int i = 0; i < N; i++){
        cin >> a;
        pq.push(a);
    }
    while(!pq.empty()){
        int pq_size = pq.size();
        largest = pq.top();
        pq.pop();
        if (pq_size > 1){
            second_largest = pq.top();
            pq.pop();
            second_largest--;
        }
        largest--;
        t++;
        if (largest > 0){
            pq.push(largest);
        }
        if (second_largest > 0){
            pq.push(second_largest);
        }
    }
    t > 1440 ? cout << -1 : cout << t;




    return 0;
}