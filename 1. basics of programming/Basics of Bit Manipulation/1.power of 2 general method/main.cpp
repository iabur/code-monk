#include<bits/stdc++.h>
using namespace std;

bool poweroftwo(int x)
{
    if(x == 0)
    {
        return false;

    }
    else
    {
        while(x%2 == 0) x /= 2;
    }
    return (x == 1);
}
int main()
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
    return 0;
}
