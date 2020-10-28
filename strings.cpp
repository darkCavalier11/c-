# include <iostream>
# include <string>

using namespace std;

int main()
{
	string greeting = "hello";
	cout << greeting << endl;
	cout << greeting[0] << endl;
	string fullGreet = greeting + " sumit";
	cout << fullGreet << endl;

	
	
	// C type. limited size. cant be increased or decreased.
	char hey[] = "Hello World!";

	// getting input string in user input
	// cin not good for multi spced strings
	string name;
	getline(cin, name);
	cout << greeting + name << endl;


	// class methods
	cout << fullGreet.length() << endl;
	cout << fullGreet.size() << endl;
	fullGreet.append(" there");
	fullGreet.insert(3, "     ");
	cout << fullGreet << endl;
	fullGreet.erase(3, 5);
	cout << fullGreet << endl;
	fullGreet.pop_back(); // remove last
	fullGreet.replace(2, 4, "Hi"); // index, no of char, arg
	
	// searching
	string vulgar = "what the hell?";
	int index = vulgar.find("hell");
	cout << index << endl;
	string sub = vulgar.substr(5, 2) << endl; // index and no of char after it.
	cout << vulgar.find_first_of("aeiou") << endl; // index of anything of given string it first encounter	
	cout << vulgar.find_first_of("!") << endl; // npos. same as unsigned c = -1;

	// literal constants
	
	



	
	return 0;
}