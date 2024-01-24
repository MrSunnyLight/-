#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	double a[n][m], b[n][m], temp;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	for(int i=1; i<n-1; i++) {
		for(int j=1; j<m-1; j++) {
			temp = (a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/5;
			b[i][j] = (int)(temp+0.5);
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
