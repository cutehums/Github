#include <iostream>
#include <string>
#include <stack>

using namespace std;

int is_open(stack <char> s2){
    int check = 0;
    int is_close_big = 0; int is_close_small = 0;
    while (!s2.empty()){
        if (s2.top() == '('){
            if (is_close_small){
                check = 1;
                break;                
            }
            else {
                is_close_small = 0;
                is_close_big = 0;
                s2.pop();
            }
        }
        else if (s2.top() == '['){
            if (is_close_big){
                check = 1;
                break;
            }
            else {
                is_close_big = 0;
                is_close_small = 0;
                s2.pop();
            }
        }
        else {
            if (s2.top() == ']'){
                s2.pop();
                is_close_big = 1;
                is_close_small = 0;
            }
            else {
                s2.pop();
                is_close_small = 1;
                is_close_big = 0;
            }             
        }
    }
    return check;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    while (1){
        getline(cin, str);
        if (str == "."){ // '.'을 입력 받으면 끝남
            break;
        }
        string yes_no = "yes"; // yes

        stack <char> s1; stack <char> s2;
        for (int i = 0; i < str.size(); i++){ // 괄호, 대괄호만 s1에 push
            char c = str[i];
            if (c == 40 || c == 41 || c == 91 || c == 93){
                s1.push(c);
            }
        }
    while (1){
        if (is_open(s1) != 1){
            break;
        }
        while (!s1.empty()){
            if (s1.top() == '('){
                if (!s2.empty()){
                    if (s2.top() == ')'){
                        s1.pop();
                        s2.pop();
                    }
                    else {
                        s2.push(s1.top());
                        s1.pop();
                    }                    
                }
                else {
                    s2.push(s1.top());
                    s1.pop();
                }

            }
            else if (s1.top() == '['){
                if (!s2.empty()){
                    if (s2.top() == ']' ){
                        s2.pop();
                        s1.pop();
                    }
                    else {
                        s2.push(s1.top());
                        s1.pop();
                    }
                }
                else {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            else {
                s2.push(s1.top());
                s1.pop();
            }
        }
        while (!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }  
    if (!s1.empty()){
        yes_no = "no";
    }
        



        
        cout << yes_no << '\n';
    }

    return 0;
}

