#include<iostream>
using namespace std;
int main(){
	string a;
	// �Կո�Ϊһ����λ������ÿ���ַ������л��֡�
	while(cin>>a){
		for(int i=a.length()-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}	
	return 0;
}
