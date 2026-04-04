#include <iostream>
using namespace std;


int main(){
	
	int a = 6;
	int b = 4;
	
	int hasil;
	// operator +, -, *, /, %
	
	// penjumlahan
	hasil = a + b;
	cout << "a + b = " << hasil << endl;
	cout << a << " + " << b << " = "  << hasil << endl;
	
	
	// penjumlahan
	hasil = a - b;
	cout << "a + b = " << hasil << endl;
	cout << a << " - " << b << " = "  << hasil << endl;
	
	// perkalian
	hasil = a * b;
	cout << "a + b = " << hasil << endl;
	cout << a << " x " << b << " = "  << hasil << endl;
	
	// pembagian, bisa jadi koma kalo float dan hasil = float
	hasil = a / b;
	cout << "a + b = " << hasil << endl;
	cout << a << " : " << b << " = "  << hasil << endl;
	
	// modulus
	hasil = a % b;
	cout << "a + b = " << hasil << endl;
	cout << a << " % " << b << " = "  << hasil << endl;
	
	// urutan eksekusi
	hasil = (a + b) * a; 
	cout << hasil << endl;
	
	return 0;
}
