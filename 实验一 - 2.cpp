#include<iostream>
using namespace std;
const double pi = 3.14159265358979323846;

int main(){
	int r = 0;
	int h = 0;
	cin >> r;
	cin >> h;
	cout << "Բ���ĵ���뾶Ϊ��" << r << endl;
	cout << "Բ���ĸ�Ϊ��" << h << endl;
	double v = pi * r * r * h;
	cout << "Բ�������Ϊ��" << v << endl;
	
	return 0;
	
} 
