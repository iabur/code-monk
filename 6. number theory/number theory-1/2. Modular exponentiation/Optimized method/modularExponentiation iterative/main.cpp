#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int x, int n, int m)
{
    int result = 1;
    while(n > 0)
    {
        if(n%2 == 1)
        {
            result = (result*x)%m;
        }
        x = (x*x)%m;
        n = n/2;
    }
    return result;
}
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << modularExponentiation(x, n, m);
}
