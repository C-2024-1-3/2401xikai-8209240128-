#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	unsigned int textUnint=65534;//oxfffe
	cout << "output in unsigned int 1 type:" << textUnint << endl;//oct
	cout << "output in char type:" << static_cast<char>(textUnint) << endl; 
	cout << "output in short type:" << static_cast<short>(textUnint) << endl; 
	cout << "output in int type:" << static_cast<int>(textUnint) << endl; 
	cout << "output in double type:" << static_cast<double>(textUnint) << endl; 
	cout << "output in double type:" << setprecision << static_cast<double>(textUnint) << endl; 
	cout << "output in Hex unsigned int type:" << hex << textUnint << endl; 
	
	system("pause");
	
	return 0;
} 
