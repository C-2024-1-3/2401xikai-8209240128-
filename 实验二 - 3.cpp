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
	
	cout << "�����ε��ܳ�Ϊ��" << z << endl;
	
	if(a-b<c&&a+b>c||b-c<a&&b+c>a||a-c<b&&a+c>b){
		cout << "���Թ���һ��������" << endl;
		if(a==b||a==c||b==c) {
			cout << "��������Ϊ����������" << endl;
		} else {
			cout << "�������β�Ϊ����������" << endl;
		}
		
	} else {
		cout << "�޷�����һ��������" << endl;
	}
	
	system("pause");
	
	return 0;
}
