#include <iostream>
#include <string>
#include <vector>

using namespace std;
int cnt;

string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    int k = 0; int p = 0; // k로 끝나는 거, p로 끝나는거
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'K'){
            if (p > 0){
                p--;
                k++;
            }
            else{
                k++;
                cnt++;
            }
        }
        else { // P일때
            if (k > 0){ //앞에 K가 있으면
                k--;
                p++;
            }
            else{
                p++;
                cnt++;
            }
        }
        
    }
    cout << cnt;

    return 0;
}