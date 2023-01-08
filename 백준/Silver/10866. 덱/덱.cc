#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    deque <int> d;
    int N; cin >> N;
    while (N--){
        string ord; cin >> ord;
        if (ord == "push_back"){
            int x; cin >> x;
            d.push_back(x);
        }

        else if (ord == "push_front"){
            int x; cin >> x;
            d.push_front(x);
        }

        else if (ord == "pop_front"){
            if (d.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }

        else if (ord == "pop_back"){
            if (d.empty()){
                cout << "-1" << '\n';
            }
            else{
                cout << d.back() << '\n';
                d.pop_back();
            }
        }

        else if (ord == "size"){
            cout << d.size() << '\n';
        }

        else if (ord == "empty"){
            if (d.empty()){
                cout << "1" << '\n';
            }
            else {
                cout << "0" << '\n';
            }
        }

        else if (ord == "front"){
            if (d.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout << d.front() << '\n';
            }
        }

        else {
            if (d.empty()){
                cout << "-1" << '\n';
            }
            else {
                cout << d.back() << '\n';
            }
        }
    }

    return 0;
}

