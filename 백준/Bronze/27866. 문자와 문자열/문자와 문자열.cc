#include <iostream>
#include <string>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int i;
    cin >> str;
    cin >> i;
    cout << str[i-1];

    return 0;
}

