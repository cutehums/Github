#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int finish = 0;
    int N; cin >> N;
    while (N--){
        string str; cin >> str;
        finish = 0;
        for (int i = 0; i < str.size(); i++){
            if (str[i] == 41){ // str[i] = ')'이라면
                int idx = i - 1;
                while (idx != -1){
                    if (str[idx] == 40){ // str[idx] = '('이라면
                        str.erase(i,1);
                        str.erase(idx,1);
                        i -= 2;
                        break;
                    }
                    else{ // str[idx] = '(' 아니라면
                        finish = 1;
                        break;
                    }
                }
            }
            if (finish){
                cout << "NO" << '\n';
                break;
            }
        }
        if (finish == 0 && str == ""){
            cout << "YES" << '\n';
        }
        else if (finish == 0 && str != "") {
            cout << "NO" << '\n';
        }
        
        
    }

    return 0;
}