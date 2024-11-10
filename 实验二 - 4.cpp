#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cin >> num1;
	cin >> num2;
	cout << "输入数字为：" << num1 << num2 << endl;
	char op;
	cin >> op;
	cout << "输入的运算符号为：" << op << endl;
	int y;
	
	switch(op) {
		case '+':
		    y = num1 + num2;
		    cout << "结果为：" << y << endl;
		
		    break;
		
		case '-':
		    y = num1 - num2;
		    cout << "结果为：" << y << endl;
		
		    break;
		
		case '*':
			y = num1 * num2;
		    cout << "结果为：" << y << endl;
		    
		    break;
		    
		case '/':
		    y = num1 / num2;
		    cout << "结果为：" << y << endl;
		    
		    break;
		    
		case '%':
		    y = num1 % num2;
		    cout << "结果为：" << y << endl;   
			
			break; 
	}
	
	
	system("pause");
	
	return 0;
}
