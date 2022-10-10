#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	using namespace std;
	int n,m;
	cin >> n;
	while (n>0){
		string a;
		cin >> a;
		m = a.size();
		cout << a.substr(0,1) << a.substr(m-1,1) << "\n";
		n -= 1;
	}
	
	return 0;
}