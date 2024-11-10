#include<iostream>
using namespace std;
const double pi = 3.14159265358979323846;

int main(){
	int r = 0;
	int h = 0;
	cin >> r;
	cin >> h;
	cout << "圆柱的底面半径为：" << r << endl;
	cout << "圆柱的高为：" << h << endl;
	double v = pi * r * r * h;
	cout << "圆柱的体积为：" << v << endl;
	
	return 0;
	
} 
