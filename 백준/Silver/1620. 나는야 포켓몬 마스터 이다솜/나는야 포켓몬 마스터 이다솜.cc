#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    int num = 1;
    map <string, int> poke_num;
    map <int, string> num_poke;
    while (N--){
        string data; cin >> data;
        poke_num.insert({data, num});
        num_poke.insert({num, data});
        num++;
    }
    while (M--){
        string question; cin >> question;
        if (isdigit(question[0])){
            int num = stoi(question);
            cout << num_poke.at(num) << '\n';
        }
        else {
            cout << poke_num.at(question) << '\n';
        }
    }

    return 0;
}

