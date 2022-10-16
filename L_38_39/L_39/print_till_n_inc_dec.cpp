// 1 2 3 4 5 4 3 2 1

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
	static int i = 1;
	if (i == n) {
		cout << i << " "; 
		return;	
	}
	cout << i++ << " ";
	print(n);
	cout << --i << " ";
}

int main() {
	int n;
	cin >> n;
	print(n);	
	cout << endl;
	return 0;
}