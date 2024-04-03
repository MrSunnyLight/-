#include<iostream>
using namespace std;
int main() {
	int n, x, max=0;
	cin >> n;
	int a[100000] = {0};
	for(int i=0; i<n; i++) {
		cin >> x;
		a[x]++;
		if(x > max) {
			max = x;
		}
	}
	for(int i=0; i<=max; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
