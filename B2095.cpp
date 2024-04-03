#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main() {
	int n;
	double sum=0, ave;
	cin >> n;
	double a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i=1; i<n-1; i++){
		sum += a[i];
	}
	cout << fixed << setprecision(2) << sum/double(n-2) << " ";
	ave = sum/double(n-2);
	if((ave-a[1])>(a[n-2]-ave)){
		cout << fixed << setprecision(2) << ave-a[1] << endl;
	} else {
		cout << fixed << setprecision(2) << a[n-2]-ave << endl;
	}
	return 0;
}
