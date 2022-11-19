#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
int n;
vector<int> v;
vector<int> v1;
stack <int> s;

void tree(){
    int p = 1;
    
        for (int k = 0; k <= n; k++){
            for (int l = pow(2, k) - 1; l < v.size(); l += pow(2, k + 1)){

                v1.push_back(v[l]);
            }
        }

        // cout << "v1의 원소" << '\n';
        // for (int i = 0; i < v1.size(); i++){
        //     cout << v1[i] << " " ;
        // }
        // cout << '\n' << "-----------------" << '\n';


            for (int front = v1.size()-1; front >= 0; front -= pow(2, p++)){
                for (int k = 0; k <= pow(2,p-1)-1; k++){
                    cout << v1[front + k] << ' ';
                }
                cout << '\n';
            }
            

    
    

}

int main(){

     cin >> n;

    for (int i = 1; i < pow(2,n); i++){
        int a; cin >> a;
        v.push_back(a);
    }
    tree();
    return 0;
}