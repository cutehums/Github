#include <iostream>
#include <queue>

using namespace std;
priority_queue<int, vector<int>, greater<int>>pq;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; int m = 0;
	cin >> n;
	while (n--) {
		cin >> m;
		if (m != 0)
			pq.push(m);

		if (m == 0){
			if (pq.empty()){
				cout << '0' << "\n";
			}
			else{
				cout << pq.top() << "\n";
				pq.pop();
			}
			
			
			
		}




	}




	return 0;
}

