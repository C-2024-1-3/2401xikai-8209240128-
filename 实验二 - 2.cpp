#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x;
	cin >> x;
	if(x>0&&x<1){
		double y = 3 - 2*x;
		cout << "y=" << y <<endl;
	} else if(x>=1&&x<5) {
		double y = (2/(4*x)) + 1;
		cout << "y=" << y <<endl;
	} else  if(x>=5&&x<10) {
		double y = x*x;
		cout << "y=" << y <<endl;
	} else {
		cout << "The numble have over 10" << endl;
	}
	
	system("pause");
	
	return 0;
}
