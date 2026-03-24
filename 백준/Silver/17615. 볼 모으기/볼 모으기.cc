#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <pair<char,int>> v;
int N;
char c;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    cin >> c;
    v.push_back({c,1});
    for (int i = 1; i < N; i++){
        cin >> c;
        if (!v.empty()){
            if (v.back().first != c){
                v.push_back({c,1});
            }

            else {
                v.back().second++;
            }
        }
        
    }
    //왼쪽 R 오른쪽 B
    int cnt_case_one = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i].first == 'R' && i != 0){//R을 왼쪽으로 이동시킬때
            cnt_case_one += v[i].second;
        }
    }
    int cnt_case_two = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i].first == 'B' && i != v.size() - 1){//B을 오른쪽으로 이동시킬때
            cnt_case_two += v[i].second;
        }
    }

    //왼쪽 B 오른쪽 R
    int cnt_case_three = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i].first == 'R' && i != v.size() - 1){//R을 오른쪽으로 이동시킬때
            cnt_case_three += v[i].second;
        }
    }
    
    int cnt_case_four = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i].first == 'B' && i != 0){//B을 왼쪽으로 이동시킬때
            cnt_case_four += v[i].second;
        }
    }
    // cout << cnt_case_one << " " << cnt_case_two << " " << cnt_case_three << " " << cnt_case_four << " ";
    cout << min({cnt_case_one, cnt_case_two, cnt_case_three, cnt_case_four});

    return 0;
}