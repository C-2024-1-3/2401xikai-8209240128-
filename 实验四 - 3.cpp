#include<iostream>
using namespace std;

int main(){
	bool L[100] = {false};
	
	for(int student = 1;student <=100;student++){
		for(int a = student - 1; a < 100; a += student){
			L[a] =! L[a];
		}
	}
	
	for(int i = 0; i < 100 ; i++){
	    if(L[i]){
	    	cout << i + 1 << " ";
		}
	}
	
	
	system("pause");
	return 0;
}
