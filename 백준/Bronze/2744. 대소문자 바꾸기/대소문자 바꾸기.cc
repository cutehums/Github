#include <iostream>
#include <string>

using namespace std;

int main(){
    string str; cin >> str;
    for (int i = 0; i < str.size(); i++){
        if (97 <= str[i] && str[i] <= 122){
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }
    cout << str;

    return 0;
}