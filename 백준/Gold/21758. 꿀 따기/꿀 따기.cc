#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>



using namespace std;

int N, honey, max_honey;
vector <int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> honey; v.push_back(honey);
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    int caseOne, caseTwo, caseThree;
    for (int i = 1; i < v.size(); i++){ // 벌 벌 통
        caseOne = sum - v[0] - v[i] + accumulate(v.begin() + i + 1, v.end(), 0);
        max_honey = max(caseOne, max_honey);
    }
    for (int i = 1; i < v.size() - 1; i++){// 통 벌 벌
        caseTwo = sum - v[v.size() - 1] - v[i] + accumulate(v.begin(), v.begin() + i, 0);
        max_honey = max(caseTwo, max_honey);
    }
    for (int i = 1; i <= v.size() - 2; i++){// 벌 통 벌
        caseThree = sum + v[i] - v[0] - v[v.size()-1];
        max_honey = max(caseThree, max_honey);
    }
    cout << max_honey;
    return 0;
}