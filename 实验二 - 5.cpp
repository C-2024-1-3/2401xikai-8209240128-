#include<iostream>

using namespace std;

int main() {
	
	int zm = 0; //��ĸ���� 
	int sz = 0; //���ָ���
	int kg = 0; //�ո����
	int qt = 0; //�����ַ� 
	
	char c;
	
    while ((c=cin.get())!= '\n'){
    	if ( (c >= 'a' && c <= 'z') || (c >+ 'A' && c <= 'Z')){
		    zm++;
		}else if(c >= '0' && c <= '9') {
			sz++;
		}else if(c=' '){
			kg++;
		}else{
			qt++;
		}
		
	}
	cout << "��ĸ��" << zm << endl; 
	cout << "���֣�" << sz << endl;
	cout << "�ո�" << kg << endl;
	cout << "�����ַ���" << qt << endl;
	
	system("pause");
	
	return 0;
}
