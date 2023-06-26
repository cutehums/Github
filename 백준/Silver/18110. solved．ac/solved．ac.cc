#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long sum = 0;
    vector <int> v;
    double n;
    cin >> n;
    if (n == 0){
        cout << 0;
    }
    else{
        for (int i = 0; i < n; i++){
            int data; cin >> data;
            sum += data;
            v.push_back(data);
        }
        sort(v.begin(), v.end());
        int remove_people = round(double(n * 0.15));
        for (int i = 0; i < remove_people; i++){
            sum -= v[i];
            sum -= v[n - i - 1];
        }
        double cnt = n - 2 * remove_people;
        double ans = sum / cnt;
        // cout << ans;
        cout << round(double(sum / cnt));
    }

    return 0;
}

