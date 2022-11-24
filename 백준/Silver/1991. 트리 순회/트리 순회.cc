#include <iostream>
#include <vector>

using namespace std;

vector<char> arr[30];

void preordor(char node){
    cout << node;
    if (arr[node - 65][0] != '.')
        preordor(arr[node - 65][0]);
    if (arr[node - 65][1] != '.')
        preordor(arr[node - 65][1]);

}

void inorder(char node){
    if (arr[node - 65][0] != '.')
        inorder(arr[node - 65][0]);
    cout << node;

    if (arr[node - 65][1] != '.')
        inorder(arr[node - 65][1]);


}
void postorder(char node){
    
    if (arr[node - 65][0] != '.')
        postorder(arr[node - 65][0]);
    if (arr[node - 65][1] != '.')
        postorder(arr[node - 65][1]);
    cout << node;

}

int main(){

    int n; cin >> n;

    for (int i = 0; i < n; i++){
        char a, b, c; cin >> a >> b >> c;
        arr[a - 65].push_back(b);
        arr[a - 65].push_back(c);
    }

    // for (int i = 0; i < n; i++){
    //     cout << arr[i][0] << arr[i][1];
    // }
    // cout << endl;

    preordor('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');

    return 0;
}