#include <iostream>
#include <queue>
using namespace std;
priority_queue<int>pq;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; int m = 0;
	cin >> n;
	while (n != 0) {
		cin >> m;
		n--;
		pq.push(m);
		if (m == 0){
			cout << pq.top() << "\n";
			pq.pop();
			
		}




	}




	return 0;
}

