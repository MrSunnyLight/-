#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[4]={0};
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i]>=0 && a[i]<=18){
			b[0]++;
		}
		else if(a[i]>=19 && a[i]<=35){
			b[1]++;
		}
		else if(a[i]>=36 && a[i]<=60){
			b[2]++;
		}
		else{
			b[3]++;
		}
	}
	for(int i=0; i<4; i++){
		cout << fixed << setprecision(2) << double(b[i]*100.0/n) << "%" << endl; 
	}
	return 0;
} 
