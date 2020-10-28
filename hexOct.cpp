# include <iostream>

using namespace std;

int main(){
	int base10 = 30;
	cout << base10 << endl;
	int base16 = 0x30;// hexadecimal
	cout << base16 << endl;
	int base8 = 030; // octal
	cout << base8 << endl;

	cout << oct << 30 << endl; // conversion base10 -> base8
	cout << hex << 48 << endl; // base10 -> base16
	return 0;
}