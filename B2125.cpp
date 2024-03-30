#include<iostream>
using namespace std;
int n,a[110];
string s[110];
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		cin>>s[i];
	}
	int cmp,maxi=-1;
	for(int i=1; i<=n; i++)
		if(a[i]>maxi) {
			cmp=i;//下标
			maxi=a[i];//最大值
		}
	for(int i=0; i<s[cmp].size(); i++)
		cout<<s[cmp][i];
	return 0;
}
