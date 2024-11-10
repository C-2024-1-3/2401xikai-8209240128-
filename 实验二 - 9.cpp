#include<iostream>
using namespace std;


int main(){
	int x = 2, s = 0, i = 0;
	float p = 0.8;
	
	while (s<100) {
		s += x;
		i++;
		x *= 2;
	}
	
	s -= x;
	i--;
	float t = 0;
	x = 2;
	for(int j = 1; j <= i; j++) {
		t += x * p;
		x *= 2;
	}
	
	float a = t / i;
	cout << "平均花了：" << a << endl;
	
	system("pause");
	
	return 0;
}
