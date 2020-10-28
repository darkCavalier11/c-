// keyboard input get into input stream stored in a buffer
// and when enter pressed all buffer the buffer
// sent to program and it ended.
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ofstream file;
	file.open("hello.py", ios::app); // open in appending mode
	if(!file.is_open()){
		cout << "not opened";
	} // true if opened successfully
	vector <string> r = {"from collections import deque", "q = deque()", "q.appendleft(7)", "print(q)"};
	for(string i: r){
		file << i << endl;
	}
	file.close();
	
	vector <string> inp;
	// reading from file
	ifstream fileread("hello.py");
	for(int i=0; i<5; i++)
	{
		string t;
		getline(fileread, t);
		inp.push_back(t);
	}
	for(int i=0; i<inp.size(); i++)
	{
		cout << inp[i] << endl;
	}
	return 0;
}