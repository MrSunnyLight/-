#include<iostream>
using namespace std;
int main() {
	//cnt是不能取药的人的个数
	int m, n, cnt=0;
	cin >> m >> n;
	for(int i=1; i<=n; i++) {
		int x;
		cin >> x;
		if(m>=x) {
			//可以取药
			m-=x;
		} else {
			//不能取药
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
