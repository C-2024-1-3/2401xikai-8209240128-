#include<iostream>
using namespace std;

int main(){
	int taozi=1;
	for(int day = 10; day > 0;day--){
		taozi = (taozi+1)*2;
	}
	cout << "第一天摘了：" << taozi << "个桃子" << endl;
	
	system("pause");
	
	return 0;
}

