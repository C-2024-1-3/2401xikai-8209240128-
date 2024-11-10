#include<iostream>

using namespace std;



int main(){
	double a;
	cin >> a;
	double xn = a;
	double xn1 = 0.5 * (xn + a /xn);
	while((xn1-xn)>(1e-5)){
		xn=xn1;
		xn1=0.5 * (xn + a / xn);
	}
	return xn;
	cout << xn << endl;
	
}
