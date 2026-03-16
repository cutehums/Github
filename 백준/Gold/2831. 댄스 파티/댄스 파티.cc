#include <iostream>
#include <queue>


using namespace std;

// (남자 플러스, 여자 마이너스, |남자| < |여자|) or (남자 마이너스, 여자 플러스, |남자| > |여자|)
// 최대가 되려면 |남자 - 여자|가 최소가 되게 짝을 맞춘다.
int N, answer;
priority_queue <int> man_plus;
priority_queue <int> woman_plus;
priority_queue <int> man_minus;
priority_queue <int> woman_minus;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    int man, woman;
    for (int i = 0; i < N; i++){
        cin >> man;
        if (man >= 0){ //양수
            man_plus.push(man);
        }
        else { //음수
            man_minus.push(-1 * man);
        }
    }

    for (int i = 0; i < N; i++){
        cin >> woman;
        if (woman >= 0){ //양수
            woman_plus.push(woman);
        }
        else { //음수
            woman_minus.push(-1 * woman);
        }
    }
    // 입력---------------------------------------------------------------------------

    while (!man_minus.empty() && !woman_plus.empty()) //남자 마이너스 여자 플러스일때
    {
        if (man_minus.top() > woman_plus.top()){
            answer++;
            man_minus.pop();
            woman_plus.pop();
        }
        else {
            woman_plus.pop();
        }

    }

        while (!man_plus.empty() && !woman_minus.empty()) //남자 플러스 여자 마이너스일때
    {
        if (man_plus.top() < woman_minus.top()){
            answer++;
            man_plus.pop();
            woman_minus.pop();
        }
        else {
            man_plus.pop();
        }

    }
    cout << answer;



    return 0;
}