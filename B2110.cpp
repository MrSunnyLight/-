#include<iostream>
using namespace std;
int main() {
	int a[30];
	string st;
	cin>>st;
	for(int i=0; i<st.length(); i++) { //�����ĸ�����˼���
		a[st[i]-'a']++;//ת���ɽ�С����
	}
	for(int i=0; i<st.length(); i++) {
		if(a[st[i]-'a']==1) { //���������һ��
			cout<<st[i];
			return 0;//ֱ���˳�����
		}
	}
	cout<<"no";
	return 0;
}
