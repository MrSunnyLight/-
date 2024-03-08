#include<iostream>
using namespace std;
int main() {
	int ans=0;
	char s[10];
	cin>>s;
	for(int i=0; i<8; i++) {
		if(s[i]=='1') {
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
