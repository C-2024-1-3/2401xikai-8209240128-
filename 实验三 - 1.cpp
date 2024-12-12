#include<iostream>
using namespace std;

int maxgys(int a,int b){
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	
	return a;
}

int mingbs(int a,int b){
	return a*b / maxgys(a,b);
}

int main(){
	int a;
	int b;
	cin >> a;
	cin >> b;
	int jg1 = maxgys(a,b);
	int jg2 = mingbs(a,b);
	cout << "这两个数的最大公约数为：" << jg1 << endl;
	cout << "这两个数的最小公倍数为：" << jg2 << endl;
	
	system("pause");
	
	return 0;
}
