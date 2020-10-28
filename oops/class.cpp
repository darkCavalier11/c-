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
    
};
int main()
{
    User me;
    me.firstName = "sumit";
    me.lastName = "pradhan";
    cout << me.getStatus() << endl;
    vector <User> usrs;
    usrs.push_back(me);
    cout << usrs[0].firstName << endl;
    return 0;
}