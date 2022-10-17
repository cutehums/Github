#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b){
    return a.first < b.first;
}

int main(void){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n,m;
    string str;
    cin >> n;
    vector <pair <int, string>> v;
    vector <pair <int, string>> ans;
    for (int x = 0; x < n; x++){
        cin >> m >> str;
        v.push_back({m,str});
    }



    


    stable_sort(v.begin(), v.end(), compare);
    for (int x=0; x < n; x++)
        cout << v[x].first << " " << v[x].second << "\n";
    
    


    return 0;
}