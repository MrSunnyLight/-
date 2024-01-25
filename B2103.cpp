#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n, m;
	double s=0;
	cin >> n >> m;
	int a[n][m], b[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> b[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(a[i][j] == b[i][j]){
				s++;
			}
		}
	}
	cout << fixed << setprecision(2) << s/(n*m)*100 << endl;
	return 0;
}
