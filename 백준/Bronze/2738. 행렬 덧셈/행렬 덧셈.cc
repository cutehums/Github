#include <iostream>
#include <vector>

using namespace std;


void matrix(int N, int M, vector <vector <int>> *matrix){
    for (int j = 0; j < N; j++){
        vector <int> v1;
        for (int i = 0; i < M; i++){
            int insert; cin >> insert;
            v1.push_back(insert);
        }
        matrix->push_back(v1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector <vector <int>> first_matrix;
    vector <vector <int>> second_matrix;
    
    int N; int M; cin >> N >> M;
    matrix(N, M, &first_matrix);
    matrix(N, M, &second_matrix);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            first_matrix[i][j] += second_matrix[i][j];
            cout << first_matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}

