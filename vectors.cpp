#include <bits/stdc++.h>
using namespace std;
void print_array(vector <int> v);
void print_array_ref(vector <int> &v); // pass by ref. changing the vector here changes everywhere

int main()
{
	string name = "sumit";
	vector <int> v = {1, 3, 7};
	// in general it is passed by value or copied to get into function
	// &v can bes used to get the array feature of passed by ref
	print_array(v);
	return 0;
}
void print_array(vector <int> v){
	int n = v.size();
	for(int i=0; i<n; i++){
		cout << v[i] << ' ' << endl;
	}
}