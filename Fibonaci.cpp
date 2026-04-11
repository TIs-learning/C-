#include <iostream>
using namespace std;


int main() 
{
	int n;
	int fn;
	int fn1;
	int fn2;
		
	cout << "Program fibonaci" << endl;
	cout << "Masukan Nilai Yang Ingin Dicari: ";
	cin >> n;
	
	fn1 = 1;
	fn2 = 0;
	fn = fn1 + fn2;
	cout << fn << " ";
	for (int i=1; i<=n; i++) {
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		
		cout << fn << " ";
	}
	
	
		
	cout << "\nSudah Selesai" << endl;
	return 0;
}
