#include<iostream>
using namespace std;
int main() {
	int k,num=1;
	string a;
	cin>>k>>a;
	for(int i=1; i<a.length(); i++) {
		if(a[i]==a[i-1]) {
			num++;
			if(num>=k) {
				cout<<a[i];
				return 0;
			}
		} else num=1;
	}
	cout << "No" << endl;
	return 0;
}
