#include <bits/stdc++.h>
using namespace std;

bool poweroftwo(int x)
{
    return (x && !(x & (x-1)));
}
int main ()
{
    int n;
    cin >> n;
    if(poweroftwo(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
