#include<iostream>
using namespace std;

int main(){
	int arr[10];
	for(int a = 0; a<10; a++){
		int num;
		cin >> num;
		arr[a] = num;
	}
	
	cout << "ÅÅĞòÇ°£º" << endl;
	for(int i=0;i<9;i++){
		cout << arr[i] << " ";
    }
    cout << endl;
    
    for(int i=0;i<9-1;i++){
	for(int j=0;j<9-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}

    cout <<  "ÅÅĞòºó£º" << endl;
	    for(int i=0;i<9;i++){
		    cout << arr[i] << " ";
	}
    
}
