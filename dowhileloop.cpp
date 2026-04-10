#include <iostream>
using namespace std;


int main() 
{
	// Ada syarat, Ada aksi 
	// do {aksi} 
	// 		while (syarat);
	// aksi dulu minimal 1 kali
	int a = 6;
	do {
		cout << "Helloo" << endl;
		a++;
	} while(a < 10);
		
	cout << "Sudah Selesai" << endl;
	return 0;
}
