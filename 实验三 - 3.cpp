#include<iostream>
using namespace std;

double fah;
double cel;

double celsius_to_fah(double cel){
	fah = cel * 9.0/5.0 + 32;
	return fah;
}

double fahrenheit_to_cels(double fah){
	cel = (fah - 32) *5.0/9.0;
	return cel;
}

int main(){
	double cel;//ÉãÊÏ¶È
	double fah;//»ªÊÏ¶È
	cin >> cel;
	double a = celsius_to_fah(cel);
	cin >> fah;
	double b = fahrenheit_to_cels(fah);
	
	
	cout << "Celsius" << " ";
	cout << "Fahrenheit" << " ";
	cout << "|" << " ";
	cout << "Fahrenheit" << " "; 
	cout << "Celsius" << endl;
	cout << " "<< " " << " " << cel << " " << " "<< " ";
	cout << " "<< " " << " " << a << " "<< " "<< " ";
	cout << " "<< " " << " " << fah << " "<< " "<< " "<< " ";
	cout << " "<< " " << " " << b << " "<< " "<< " ";
	
	system("pause");
	return 0; 
}
