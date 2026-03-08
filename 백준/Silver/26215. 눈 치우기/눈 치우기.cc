#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector <int> v;
int t = 0;


bool f(){
    for (int i =0; i < v.size(); i++){
        if (v[i] > 0){
            return false; //눈을 덜치움
        }
    }
    return true;//눈을 다치움
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    int a;
    for (int i = 0; i < N; i++){
        cin >> a;
        v.push_back(a);
    }
    while(true){
        if (f()){
            if (t > 1440){
                cout << -1;
            }
            else {
                cout << t;
            }
            break;
        }
        int max = *max_element(v.begin(), v.end());
        int idx = find(v.begin(), v.end(), max) - v.begin();
        v.erase(v.begin() + idx);
        if (!v.empty()){
            int second_max = *max_element(v.begin(), v.end());
            int second_idx = find(v.begin(), v.end(), second_max) - v.begin();
            v[second_idx]--;
        }


        t++;
        max--;
        v.push_back(max);
        
    }



    return 0;
}