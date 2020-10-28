#include <iostream>
#include <cmath>



using namespace std;


int main(){
	// data types
	// static type data
	// integral data types

	short a;
	int b;
	long c;
	long long d;
	unsigned short e;
	unsigned int f;
	unsigned long g;
	unsigned long long h;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(unsigned int) << endl;
	cout << sizeof(unsigned long) << endl;
	cout << sizeof(unsigned long long) << endl;


	// char data types
	// 8 bits
	char x = 'A';
	cout << x << endl;
	cout << (int) x << endl; // static casting
	

	// bool data type
	bool t = true;
	cout << t << endl; // outs 1

	// float type 
	float aa; // least no of significant digit
	double bb;
	long double cc; // 128 bit. Most significant digits

	cout << sizeof(aa) << endl;

	// constants
	const int val = 5; // read only variable
	// const also can be declared by define also at above
	enum { y = 100 };

	return 0;
}