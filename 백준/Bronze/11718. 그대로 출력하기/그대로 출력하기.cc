#include <iostream>
#include <string>


using namespace std;

int main(){
    int hundred = 100;
    while (hundred--){
        string str;
        getline(cin, str);
        cout << str << '\n';
    }    
    return 0;
}