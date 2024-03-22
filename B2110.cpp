#include<iostream>
using namespace std;
int main() {
	int a[30];
	string st;
	cin>>st;
	for(int i=0; i<st.length(); i++) { //这个字母出现了几次
		a[st[i]-'a']++;//转化成较小数字
	}
	for(int i=0; i<st.length(); i++) {
		if(a[st[i]-'a']==1) { //如果出现了一次
			cout<<st[i];
			return 0;//直接退出程序
		}
	}
	cout<<"no";
	return 0;
}
