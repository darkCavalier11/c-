#include <bits/stdc++.h>
using namespace std;
class User
{
    //not accessed by instance
    // by default they are private
    string status = "fine";
    static int userCount; // cant asssign inline. label outside
    public:
        static int getUserCnt()
        {
            return userCount; // only return static member
        }
        string firstName;
        string lastName;
        string getStatus() // getter
        {
            return status;
        }
        void setStatus(string status)
        {
            this->status = status;
        }
        // constructor no return
        User(string firstName, string lastName, string status)
        {
            this->firstName = firstName;
            this->lastName = lastName;
            this->status = status;
            userCount++;
        }
        ~User()
        {
            // destructor
            cout << "Hello" << endl;
            userCount--;
        }
};
int User::userCount = 0;
int main()
{
    User me("sumit", "pradhan", "excellent"); // constructor
    cout << me.getStatus() << endl;
    me.setStatus("Good");
    cout << me.getStatus() << endl;
    cout << User::getUserCnt() << endl;
    vector <User> usrs;
    usrs.push_back(me);
    cout << usrs[0].firstName << endl;
    return 0;
}