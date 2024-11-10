#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	double z = a + b + c;
	
	cout << "三角形的周长为：" << z << endl;
	
	if(a-b<c&&a+b>c||b-c<a&&b+c>a||a-c<b&&a+c>b){
		cout << "可以构成一个三角形" << endl;
		if(a==b||a==c||b==c) {
			cout << "此三角形为等腰三角形" << endl;
		} else {
			cout << "此三角形不为等腰三角形" << endl;
		}
		
	} else {
		cout << "无法构成一个三角形" << endl;
	}
	
	system("pause");
	
	return 0;
}
