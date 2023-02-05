#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    string str; cin >> str;
    int colon = count(str.begin(), str.end(), ':');
    int under_bar = count(str.begin(), str.end(), '_');
    cout << str.size() + colon + under_bar * 5;
    return 0;
}