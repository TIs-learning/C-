#include <iostream>
using namespace std;


int main(){
	
	// Declare type data
	float a,b;
	char aritmatika;
	
	// Program
	cout << "Calculator Simple Program (Enter to Next)" << endl;
	cin.get();
	cout << "Input Values 1: ";
	cin >> a;
	cout << "Input Values 2: ";
	cin >> b;
	cout << "Choose the operation operator";
	cout << "(+, -, x, :) = ";
	cin >> aritmatika;
	
	if (aritmatika=='+') 
	{
		cout << "Hasil Perhitungan: " << a << " + " << b << " = " << a+b << endl;
	}
	else if (aritmatika=='-') 
	{
		cout << "Hasil Perhitungan: " << a << " - " << b << " = " << a-b << endl;
	}
	else if (aritmatika=='x') 
	{
		cout << "Hasil Perhitungan: " << a << " x " << b << " = " << a*b << endl;
	}
	else if (aritmatika==':') 
	{
		cout << "Hasil Perhitungan: " << a << " : " << b << " = " << a/b << endl;
	}
	cout << "End Of Program, Nice To Meet You" << endl;
	return 0;
}
