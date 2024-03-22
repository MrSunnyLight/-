#include<iostream>
using namespace std;
int main() {
	string s;
	bool flag = true;
	while (cin >> s) {
		if(flag) {
			flag = false;
			cout << s.length();
		} else {
			cout << ',' << s.length();
		}
	}
	return 0;
}
