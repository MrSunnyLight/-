#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double n;
	cin >> n;
	if(n > 0) {
		cout << fixed << setprecision(2) << n << endl;
	} else {
		cout << fixed << setprecision(2) << -n << endl;
	}
	return 0;
}
