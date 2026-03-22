#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string N;
int carry;

//2N -2

void multi(){
    int num;
    for (int i = N.size() - 1; 0 <= i; i--){
        num = (N[i] - 48) * 2 + carry;
        N[i] = char((num % 10) + 48);
        carry = (num >= 10) ? 1 : 0; //어차피 제일큰 9와 2를 곱하면 18이여서 20을 안넘어가므로 1만 해도 됨
        if (i == 0){
            if (carry != 0){
                N = "1" + N;
            }
        }
    }
}

// 첫번째 자리에 2를 뺀다
// 뺄수 있으면 빼고 못뺀다면 8을더하고 앞자리 하나를 뻰다.
void subtraction(){
    int borrow = -2;//2를 빼야함 
    int string_end_idx = N.size() - 1;
        for (int i = string_end_idx; 0 <= i; i--){
            if (N[i] - 48 + borrow >= 0){//뺄수 있으면 뺀다.
                N[i] = char(N[i] + borrow);
                break;
            }
            else { //못 뺀다
                N[i] = char(N[i] + 10 + borrow);
                borrow = -1;
            }
        }
    // 앞에 0이면 제거
    // if (N[0] == '0'){
    //     for (int i = 0; i < N.size() - 1; i++){
    //         if (N[i] != '0'){
    //             N.erase(N.begin(), N.begin() + i);
    //             break;
    //         }
    //     }
    // }
    while (N.size() > 1 && N[0] == '0'){
        N.erase(0, 1);
    }

    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    if (N != "1"){
        multi();
        subtraction();
    }

    
    
    cout << N;


    



    return 0;
}