#include <bits/stdc++.h>
using namespace std;
bool f(int x, int y){
    return x > y;
}

int main()
{
    // vector
    vector <int> a = {1, 8, 5, 4};
    sort(a.begin(), a.end());

    //bin search
    bool present = binary_search(a.begin(), a.end(), 6);
    vector<int>::iterator it = lower_bound(a.begin(), a.end(), 4); // ele >= 4
    vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), 4); // ele > 4
    cout << *it << ' ' << *it2 << endl;
    for(int x:a) cout << x ; // printing array
    printf("\n");
    // reverse sort
    sort(a.begin(), a.end(), f);
    cout << a[0];

    set<int> s;
    s.insert(1);
    s.insert(7);
    s.insert(9);
    s.insert(0);
    s.erase(4);
    for(int x: s) cout << x << ' ';
    auto it3 = s.find(4);
    if(it3 == s.end()) cout << "present" << endl;

    map<int, int> m;
    m[1] = 5;
    m[4] = 8;
    auto it4 = m.find(5);
    auto it5 = m.erase(4);
}
