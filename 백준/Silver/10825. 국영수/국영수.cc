#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct cmp{
    bool operator()(pair <string, vector <int>> p1, pair <string, vector <int>> p2){
        if (p1.second[0] == p2.second[0]){ // 국어 점수가 같으면
            if (p1.second[1] == p2.second[1]){ // 국어 영어가 같으면
                if (p1.second[2] == p2.second[2]){ // 국어 영어 수학이 같으면
                    return p1.first > p2.first;
                }
                else { //수학 점수가 다르면 
                    return p1.second[2] < p2.second[2];
                }
            }
            else { // 영어가 다르면
                return p1.second[1] > p2.second[1];
            }
        }

        else { // 국어 점수가 다르면
            return p1.second[0] < p2.second[0];
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    priority_queue <pair <string, vector <int>>, vector <pair <string, vector <int>>>, cmp> pq;
    while (N--){
        string name; int Korean, English, Math;
        cin >> name >> Korean >> English >> Math;
        pair <string, vector<int>> p = {name, {Korean, English, Math}};
        pq.push(p);
    }
    while (!pq.empty()){
        cout << pq.top().first << '\n';
        pq.pop();
    }
    
    return 0;
}
