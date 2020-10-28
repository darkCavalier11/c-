#include <bits/stdc++.h>
using namespace std;
// function overloading
// two different function with differnce signature i.e. difference in paramenter type or numbers.
// minimize overloading by using default args incase of multiple function having same
// functionality and only vary by constant parameter

struct Rectangle
{
	double length;
	double width;
};
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void swap(string &s1, string &s2){
	string temp = s1;
	s1 = s2;
	s2 = temp;
}
double area(Rectangle rec){
	return rec.length*rec.width;
}
int main()
{
	int a = 15, b = 20;
	swap(a, b);
	cout << a << ' ' << b << endl;
	Rectangle rec;
	rec.length = 20;
	rec.width = 15;
	cout << area(rec) << endl;
}