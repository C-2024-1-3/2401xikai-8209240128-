#include<iostream>

using namespace std;

int main() {
	
	int zm = 0; //字母个数 
	int sz = 0; //数字个数
	int kg = 0; //空格个数
	int qt = 0; //其他字符 
	
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
	cout << "字母：" << zm << endl; 
	cout << "数字：" << sz << endl;
	cout << "空格：" << kg << endl;
	cout << "其他字符：" << qt << endl;
	
	system("pause");
	
	return 0;
}
