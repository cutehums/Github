#include <iostream>

using namespace std;

class Island_num
{
    private:
        int w;
        int h;
        int dir[8][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
    public:
        Island_num(int wid, int high);
        int island_cnt = 0;
        bool** visited;
        int** graph;   
        int** getGraph();
        bool** getVisited();
        void graph_search(int row, int col);

};

Island_num::Island_num(int wid, int high){
    w = wid;
    h = high;

    graph = new int* [h];
    for (int i = 0; i < h; i++){
        graph[i] = new int[w];
    }

    visited = new bool* [h];
    for (int i = 0; i < h; i++){
        visited[i] = new bool[w];
    }

    for (int j = 0; j < h; j++){
        for (int i = 0; i < w; i++){
            int data; cin >> data;
            graph[j][i] = data;
            visited[j][i] = false;
        }
    }
}

void Island_num::graph_search(int row, int col){
    int r, c;
    visited[row][col] = true;
    for (int i = 0; i < 8; i++){
        r = row + dir[i][0];
        c = col + dir[i][1];
        if (0 <= r && r < h && 0 <= c && c < w){
            if (graph[r][c] == 1 && visited[r][c] == false){
                graph_search(r, c);
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1){
        int w, h; cin >> w >> h;
        // cout << "w는 " << w << " h는 " << h << '\n';
        if (w == 0 && h == 0){
            break;
        }
        else{

            Island_num island_num(w,h);
            for (int i = 0; i < h; i++){
                for (int j = 0; j < w; j++){  
                    if (island_num.graph[i][j] == 1 && island_num.visited[i][j] == false){      
                        island_num.island_cnt++;    
                        island_num.graph_search(i, j);
                    }
                }
            }
            cout << island_num.island_cnt << '\n';
            // for (int i = 0; i < h; i++){
            //     for (int j = 0; j < w; j++){
            //         cout << graph[i][j] << ' ';
            //     }
            //     cout << '\n';
            // }
            //동적할당 해제
            for (int i = 0; i < h; i++){
                delete[] island_num.graph[i];
            }
            delete[] island_num.graph;

            for (int i = 0; i < h; i++){
                delete[] island_num.visited[i];
            }
            delete[] island_num.visited;
        }

    }

    return 0;
}

