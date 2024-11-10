#include<iostream>

using namespace std;

int main() {
	char ch;
	cin >> ch;
	if(ch >= 'a' && ch <= 'z') {
		ch -= 32;
		cout << "´óÐ´×Ö·ûÎª£º" << ch << endl;
	} else {
		cout << "ASCII:" << (int)(ch + 1) <<endl;
	}
	
	return 0;
}


