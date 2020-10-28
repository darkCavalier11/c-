#include <bits/stdc++.h>
#include "declaration.h"
using namespace std;

int main()
{
    Rectangle rec;
    rec.length = 8;
    rec.width = 5;
    cout << area(rec) << '\n';
}
// g++ implement.cpp definition.cpp