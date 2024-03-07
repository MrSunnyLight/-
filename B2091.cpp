#include<iostream>
using namespace std;
int main() {
	int m, sum=0;
	cin >> m;
	int a[m], b[m];
	for(int i=0; i<m; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
		sum += a[i]*b[i];
	}
	cout << sum << endl;
	return 0;
}
