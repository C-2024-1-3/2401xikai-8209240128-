#include<iostream>
#include<string>
using namespace std;

int indexOf(const string s1[],const string s2[]){
	for(int i = 0;i<1;i++){
		for(int j = 0;j< 3 ;j++){
			if(s1[i]==s2[j]){
				cout << j << endl;
			}
		}
		cout << -1 << endl;
	}
}

int main(){
	string s1[1]={"welcome"};
	string s2[3]={"We","welcome","you"}; 
	indexOf(s1,s2);
	
	system("pause");
	return 0;
}
