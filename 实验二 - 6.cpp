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
	cout << "���Լ���ǣ�" << a << endl;
	
	int d = a * b;
	
	cout << "��С�������ǣ�" << d << endl;
	
	return 0;
	
}
