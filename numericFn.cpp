# include <iostream>
# include <cmath>

using namespace std;

int main()
{
	cout << sqrt(25) << endl;
	cout << sqrt(-25) << endl; //-nan
	cout << INFINITY << endl;
	cout << -INFINITY << endl;
	cout << NAN << endl;
	cout << remainder(10, 3.25) << endl; // work with non integer 
	cout << fmax(2, 3.2) << endl;
	cout << fmin(5, 2.9) << endl;
	cout << ceil(1.5) << endl;
	cout << floor(1.9) << endl;
	cout << trunc(1.5) << endl; // only remove the decimal part
	cout << round(2.45) << endl;


}	