#include <iostream>
#include <vector>

using namespace std;
int N; int M;
int WB_cnt(vector <vector <char>> & chess){
    int mini_cnt = 64;
    vector <vector <char>> WB = {{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};
    for (int x = 0; x <= N - 8; x++){ 
        for (int y = 0; y <= M - 8; y++){
            int cnt = 0;
            for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++){
                    if (WB[i][j] != chess[x + i][y + j]){
                        cnt++;
                    }
                    
                }

            }
            if (mini_cnt > cnt){
                mini_cnt = cnt;
            }
        }
    }
    return mini_cnt;
}
int BW_cnt(vector <vector <char>> & chess){
    int mini_cnt = 64;
    vector <vector <char>> BW = {{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},};
    for (int x = 0; x <= N - 8; x++){ 
        for (int y = 0; y <= M - 8; y++){
            int cnt = 0;
            for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++){
                    if (BW[i][j] != chess[x + i][y + j]){
                        cnt++;
                    }
                    
                }

            }
            if (mini_cnt > cnt){
                mini_cnt = cnt;
            }
        }
    }
    return mini_cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    vector <vector <char>> chess;
    for (int i = 0; i < N; i++){
        vector <char> line;
        for (int j = 0; j < M; j++){
            char c; cin >> c;
            line.push_back(c);
        }
        chess.push_back(line);
    }

    int WB = WB_cnt(chess);
    int BW = BW_cnt(chess);

    if (WB <= BW){
        cout << WB;
    }
    else {
        cout << BW;
    }


    return 0;
}

