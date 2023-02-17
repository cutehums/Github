#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0;
    int N; cin >> N;
    vector <int> v1;
    vector <int> cnt(8002);
    for (int i = 0; i < N; i++){
        int s; cin >> s;
        sum += s;
        v1.push_back(s);
        cnt[s + 4001]++;
        
    }
    sort(v1.begin(), v1.end());
    int arithmetic_mean = round(sum / (double)N); // 산술 평균
    int median = v1[N / 2]; // 중앙값
    int range = v1[v1.size()-1] - v1[0]; // 범위
    int mode; // 최빈값
    int most_many = *max_element(cnt.begin(), cnt.end());
    if (count(cnt.begin(), cnt.end(), most_many) >= 2){
        cnt[find(cnt.begin(), cnt.end(), most_many) - cnt.begin()] = -1;
        mode = (find(cnt.begin(), cnt.end(), most_many) - cnt.begin()) - 4001; // 최빈값
    }
    else {
        mode = (find(cnt.begin(), cnt.end(), most_many) - cnt.begin()) - 4001; // 최빈값
    }

    cout << arithmetic_mean << '\n' << median << '\n' << mode << '\n' << range;

    


    return 0;
}

