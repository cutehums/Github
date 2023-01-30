#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main(){
    int point = 43;
    map <string, int> m;
    for (int i = 0; i < 4; i++){
        
        // cout << point << '\n';
        string score;
        char abcd =  'A' + i;
        score.push_back(abcd);
        for (int j = 0; j < 3; j++){
            char plus_zero_mius[4] = {'+', '0', '-'};
            score.push_back(plus_zero_mius[j]);
            m.insert({score,point});
            score.erase(1,1);
            point -= 3;
        }
        point -= 1;
    }
    string str; cin >> str;

    if (str.compare("F")){
        cout << fixed;
        cout.precision(1);        
        cout << (double) m[str]/10;        
    }
    else {
        cout << fixed;
        cout.precision(1);
        cout << (double)0;
    }
    return 0;
}