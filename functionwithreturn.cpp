#include <iostream>
using namespace std;


int kuadrat(int x) {
	int y;
	y = x * x;
	return y;
	
}

int tambah(int a, int b) {
	int c;
	c = a + b;
	return c;
}

int main (){
	int input, hasil, hasil2, a, b;
	cout << "Nilai Kuadrat dari: ";
	cin >> input;
	
	hasil = kuadrat(input);
	cout << "Hasilnya adalah " << hasil << endl;
	
	cout << "Input a Values: ";
	cin >> a;
	cout << "Input b Values: ";
	cin >> b;
	hasil2 = tambah(a, b);
	cout << "Hasil Penjumlahan adalah: " << hasil2 << endl;
	return 0;
}
