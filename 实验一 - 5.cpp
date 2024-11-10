#include<iostream>
#include<iomanip>
using namespace std;

const double fahrenheit = 32.0;
const double celsius = 0;

int main(){
	double fahrenheit;
	cout << "请输入华摄度：" << endl;
	cin >> fahrenheit; 
	
	double celsius = (fahrenheit - 32) *5.0/9.0;
	
	cout << "摄氏度为：" << fixed << setprecision(2) << celsius << endl;
	
	return 0;
} 
