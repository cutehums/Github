#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int Binary_search_lower_bound(vector<int>&v, int num, int size){
    int lower_bound = 0;
    int begin = 0; int end = size - 1;
        while (begin <= end){
            int middle_idx = (begin + end) / 2; 
            if (num <= v[middle_idx]){
                end = middle_idx - 1;          
            }

            else {
                begin = middle_idx + 1;
            }
        }
        lower_bound = end;
        // cout << num << "의 lower_bound은: " << lower_bound << '\n';
    
        return lower_bound;

}
int Binary_search_upper_bound(vector<int>&v, int num, int size){
    int upper_bound = 0;
    int begin = 0; int end = size - 1;
        while (begin <= end){
            int middle_idx = (begin + end) / 2; 
            if (num >= v[middle_idx]){
                begin = middle_idx + 1;
                          
            }

            else {
                end = middle_idx - 1;
            }
        }
        upper_bound = begin; 
        // cout << num << "의 uppper_bound은: " << upper_bound << '\n';
    
        return upper_bound;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int num; cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int M; cin >> M;
    while (M--){
        int num; cin >> num;
        int upper_bound = Binary_search_upper_bound(v, num, N); // 백준에서 call by reference 런타임 에러뜨는 거 궁금함.
        int lower_bound = Binary_search_lower_bound(v, num, N);
        int ans = upper_bound - lower_bound - 1;
        cout << ans << ' ';
        // cout << num << "의 개수는 " << "ans: " << ans << ' ' << '\n';
        // cout << "upper: " << upper_bound << '\n';
        // cout << "lower: " << lower_bound << '\n';
        // Binary_search_lower_bound(v, num, N);
    }

    return 0;
}

