#include<iostream>
using namespace std;
int main() {
	// ¹²ÓÐ n ÕµµÆ 
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		a[i] = 1;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j%i==0){
				a[j]=1-a[j];
			}
		}
	}
	for(int i=1; i<=n; i++){
		if(a[i]==0){
			cout << i << " ";
		}
	}
	return 0;
}
