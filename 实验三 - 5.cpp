#include<iostream>
using namespace std;

int main(){
	int taozi=1;
	for(int day = 10; day > 0;day--){
		taozi = (taozi+1)*2;
	}
	cout << "��һ��ժ�ˣ�" << taozi << "������" << endl;
	
	system("pause");
	
	return 0;
}

