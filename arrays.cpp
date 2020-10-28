#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void print_array(int arr[]);

int main()
{
	// array is static
	// vectors are dynmic
	int ranks[200000] = {1, 5, 3, 0, 2, 4};
	cout << sizeof(ranks)*8 << endl;
	int length = sizeof(ranks)/sizeof(ranks[0]);
	print_array(ranks);
	return 0;
}
void print_array(int arr[]){
	int length = sizeof(arr)/sizeof(arr[0#include <.h>])
	for(int i = 0; i < length ; i++){
		cout << arr[i] << endl;
	}
}