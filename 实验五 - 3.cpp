#include<iostream>
using namespace std;

class Cube{
	private:
		int C_length;
		int C_width;
		int C_height;
	public:
		void inputfunc(){
			cin >> C_length;
			cin >> C_width;
			cin >> C_height;
		}
		
		int get_V(){
			return C_length * C_width * C_height;
		}
		
		void display(){
			cout << "Í¼ÏñÌå»ýÎª£º" << get_V() << endl;
		}
		
};

int main(){
	Cube C1;
	C1.inputfunc();
	C1.get_V();
	C1.display();
	
	Cube C2;
	C2.inputfunc();
	C2.get_V();
	C2.display();
	
	Cube C3;
	C3.inputfunc();
	C3.get_V();
	C3.display();
	
	return 0; 
}
