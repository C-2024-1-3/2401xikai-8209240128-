#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cin >> num1;
	cin >> num2;
	cout << "��������Ϊ��" << num1 << num2 << endl;
	char op;
	cin >> op;
	cout << "������������Ϊ��" << op << endl;
	int y;
	
	switch(op) {
		case '+':
		    y = num1 + num2;
		    cout << "���Ϊ��" << y << endl;
		
		    break;
		
		case '-':
		    y = num1 - num2;
		    cout << "���Ϊ��" << y << endl;
		
		    break;
		
		case '*':
			y = num1 * num2;
		    cout << "���Ϊ��" << y << endl;
		    
		    break;
		    
		case '/':
		    y = num1 / num2;
		    cout << "���Ϊ��" << y << endl;
		    
		    break;
		    
		case '%':
		    y = num1 % num2;
		    cout << "���Ϊ��" << y << endl;   
			
			break; 
	}
	
	
	system("pause");
	
	return 0;
}
