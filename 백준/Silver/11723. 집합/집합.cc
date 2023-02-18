#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set <int> s;
    int N; cin >> N;
    while (N--){
        int x;
        string ord; cin >> ord;
        if (ord != "all" && ord != "empty"){
            cin >> x;
        }

        if (ord == "add"){
            s.insert(x);
        }
        else if (ord == "remove"){
            s.erase(x);
        }
        else if (ord == "check"){
            cout << s.count(x) << '\n';
        }
        else if (ord == "toggle"){
            if (s.find(x) != s.end()){ // x를 찾았을 떄
                s.erase(x);
            }
            else { // x를 못 찾았을때
                s.insert(x);
            }
        }
        else if (ord == "all"){
            s = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        }
        else {
            s.clear();
        }



    }
    return 0;
}
