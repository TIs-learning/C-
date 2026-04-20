#include <iostream>
using namespace std;


int main(){
	
	int a;
	cout << "Masukan angka: ";
	cin >> a;
	cout << a << endl;
	
	// if statement, else statement, else if statement
	if (a == 4) // Condition statement (boolean)
	{
		cout << "Hello World" << endl; // If true then run
	} else if (a == 7){ 
		cout << "Hallo Dunia" << endl;
	} else if (a == 6) {
		cout << "Hello Everyone" << endl;
	}
	cout << "End..."; 
	return 0;
}
