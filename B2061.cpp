#include<iostream>
using namespace std;
int main(){
	// �������� k 
	int k, a;
	// 1�ĸ���num1, 5�ĸ���num5, 10�ĸ���num10 
	int num1=0, num5=0, num10=0;
	cin >> k;
	for(int i=0; i<k; i++){
		cin >> a;
		if(a == 1){
			num1++;
		} else if(a == 5){
			num5++;
		} else if(a == 10){
			num10++;
		}
	}
	cout << num1 << endl << num5 << endl << num10 << endl;
	return 0;
} 
