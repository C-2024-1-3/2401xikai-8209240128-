#include<iostream>
#include<iomanip>
using namespace std;

const double fahrenheit = 32.0;
const double celsius = 0;

int main(){
	double fahrenheit;
	cout << "�����뻪��ȣ�" << endl;
	cin >> fahrenheit; 
	
	double celsius = (fahrenheit - 32) *5.0/9.0;
	
	cout << "���϶�Ϊ��" << fixed << setprecision(2) << celsius << endl;
	
	return 0;
} 
