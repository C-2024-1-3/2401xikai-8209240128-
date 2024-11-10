#include<iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a;
	cin >> b;
	
	while (b!=0) {
		int c = b; 
		b = a % b;
		a = c; 
	}
	cout << "最大公约数是：" << a << endl;
	
	int d = a * b;
	
	cout << "最小公倍数是：" << d << endl;
	
	return 0;
	
}
