#include <iostream>
#include <limits> // Library to cek max byte 
using namespace std;


int main(){
	
	/*
	1 byte = 8 bit;
	Memory management use byte;
	Every int have max and min bit values;
	Cannot input max value int more than 2147483647;
	*/
	
	int a = 7;
	unsigned int b; // use unsigned if you want max values
	b = 8;
	cout << "values of int var a: " << a << endl;
	cout << "values of int var b: " << b << endl << endl; // use 2 endl better
	
	// Same Size as int 4 byte
	cout << sizeof(a) << " byte" << endl;
	cout << sizeof(b) << " byte" << endl;
	
	cout << numeric_limits<int>::max() << endl; // This will check max value
	cout << numeric_limits<unsigned int>::min() << endl << endl;
	
	// Type data long max is more than int
	long d = 8;
	long long e = 9;
	cout << "Value data long: " << d << endl;
	cout << "Size of type data long: " << sizeof(d) << " byte" << endl;
	
	/* 
	Compiler Os juga berpengaruh di Linux mungkin long 8, windows 4
	kecuali long long 
	*/
	
	cout << "Size of type data long long:" << sizeof(e) << " byte" << endl;
	
	cout << "Max values long: " << numeric_limits<long>::max() << endl;
	cout << "Min values long: " << numeric_limits<long>::min() << endl << endl;

	// type data short
	short p = 5;
	cout << "values of short var p: " << p << endl;
	cout << sizeof(b) << " byte" << endl;
	
	/* 
	Short punya min max value yang berbeda
	*/
	
	cout << "Max values long: " << numeric_limits<short>::max() << endl;
	cout << "Min values long: " << numeric_limits<short>::min() << endl << endl;
	
	// Type data Decimal
	float v = 8.7;
	double y = 7.4;
	
	// Type data character , just 1 bit
	char z = 'r';
	
	// Type data boolean, just 1 bit but memory management use 1 byte
	bool r = true; // or false
	
	return 0;
}
