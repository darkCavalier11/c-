#include <bits/stdc++.h>
using namespace std;

class User{
    public:
        string name;
        string regNo;
        virtual void out();
};
void User::out()
{
    cout << "From User" << endl;
}
class Admin : public User{
    public:
        int level;
        void fullname(){
            cout << this->name << endl;
        }
        void out(){
            cout << "From admin";
        }
};
int main()
{
    Admin a1;
    User &u = a1;
    u.out();
    return 0;
}