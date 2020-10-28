#include <bits/stdc++.h>
namespace dummy
{
    void printVect(std::vector <int> v)
    {
        for(int i=0; i < v.size(); i++) printf("%d ", v[i]);
    }
}

int main()
{
    std::vector <int> v = {1, 8, 9, 6, 7, 5};
    dummy::printVect(v);
    
}