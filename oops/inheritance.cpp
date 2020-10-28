#include <bits/stdc++.h>
using namespace std;

class User{
    public:
        string name;
        string regNo;
    
};
class Admin : public User{
    public:
        int level;
        void fullname(){
            cout << this->name << endl;
        }
};
int main()
{
    Admin me;
    me.name = "sumit";
    me.regNo = "1art7b";
    me.level = 3;
    cout << me.regNo << endl;
    return 0;
}