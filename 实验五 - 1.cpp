#include<iostream>
using namespace std;
class Time{
	private:
		int hour;
		int minute;
		int sec;
	public:
		void func(){
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}
		
		void coutfunc(){
			cout << hour << ":" << minute << ":" << sec << endl;
		}
};


int main(){
	Time t1;
	t1.func();
	t1.coutfunc();
	
	system("pause");
	return 0;
}
