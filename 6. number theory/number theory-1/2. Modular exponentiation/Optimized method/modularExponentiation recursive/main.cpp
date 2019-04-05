#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int x, int n, int m)
{
    if(n == 0)
        return 1;
    else if(n%2 == 0)
    {
        return modularExponentiation((x*x)%m, n/2, m);
    }
    else return (x*modularExponentiation((x*x)%m, (n-1)/2, m))%m;
}

int main()
{
    int x, n, m;
    cin >> x >> n >>m;
    cout << modularExponentiation(x, n, m);
}
