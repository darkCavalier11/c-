#include <bits/stdc++.h>
using namespace std;
class User
{
    //not accessed by instance
    // by default they are private
    string status = "fine";
    public:
        string firstName;
        string lastName;
        string getStatus()
        {
            return status;
        }
        // constructor no return
        User(string firstName, string lastName, string status)
        {
            this->firstName = firstName;
            this->lastName = lastName;
            this->status = status;
        }
        ~User()
        {
            // destructor
            cout << "Hello" << endl;
        }
};
int main()
{
    User me("sumit", "pradhan", "excellent"); // constructor
    cout << me.getStatus() << endl;
    vector <User> usrs;
    usrs.push_back(me);
    cout << usrs[0].firstName << endl;
    return 0;
}