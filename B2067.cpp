#include<iostream>
using namespace std;
int main() {
	//cnt�ǲ���ȡҩ���˵ĸ���
	int m, n, cnt=0;
	cin >> m >> n;
	for(int i=1; i<=n; i++) {
		int x;
		cin >> x;
		if(m>=x) {
			//����ȡҩ
			m-=x;
		} else {
			//����ȡҩ
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
