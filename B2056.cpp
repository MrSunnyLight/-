#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int sum=0, a;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		sum += a;
	}
	cout << sum << " ";
	cout << fixed << setprecision(5) << (double)sum/n << endl;
	return 0;
}
