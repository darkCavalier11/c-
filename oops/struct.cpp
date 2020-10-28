#include <bits/stdc++.h>
using namespace std;
struct User
{
    string firstName;
    string lastName;
    string getStatus()
    {
        return status;
    }
    private: //not accessed by instance
        string status = "fine";
};
int main()
{
    User me;
    me.firstName = "sumit";
    me.lastName = "pradhan";
    cout << me.getStatus() << endl;
    return 0;
}