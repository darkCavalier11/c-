# include <bits/stdc++.h>
using namespace std;
// templatizing function or function template
template <typename T>
void swapd(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// overloading function templates
template<typename T>
void swapd(T a[], T b[], int  size)
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main()
{
    string s1 = "World!", s2 = "Hello ";
    swapd(s1, s2);
    int p = 4, q = 8;
    swapd(p, q);
    cout << s1 << s2 << endl;
    cout << p << ' ' << q << endl;
    int cstm[] = {7,7,7,7,7};
    int cstd[] = {1,1,1,1,1};
    swapd(cstm, cstd, 5);
    for(int i = 0; i < 5; i++) cout << cstm[i] << ' ';
    return 0;
}