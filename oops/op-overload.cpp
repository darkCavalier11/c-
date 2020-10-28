#include <bits/stdc++.h>
using namespace std;
class Points{
    public:
        int x;
        int y;
        Points operator+(Points pt){
            Points ptr;
            ptr.x = x + pt.x;
            ptr.y = y + pt.y;
            return ptr;
        }
};
// output overloading
ostream &operator <<(ostream &output, Points &pt)
{
    output << "X: " << pt.x << " Y: " << pt.y << '\n';
    return output;
}
// input overloading
istream &operator >>(istream& input, Points &pt)
{
    input >> pt.x >> pt.y;
    return input;
}
int main()
{
    Points p1, p2;
    cin >> p1;
    cin >> p2;
    Points fin = p1 + p2;
    cout << fin << endl;
    return 0;
}
