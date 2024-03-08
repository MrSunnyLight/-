#include<iostream>
using namespace std;
int main(){
	string a;
	// 以空格为一个单位，来对每个字符串进行划分。
	while(cin>>a){
		for(int i=a.length()-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}	
	return 0;
}
