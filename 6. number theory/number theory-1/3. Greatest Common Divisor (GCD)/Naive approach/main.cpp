#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int m = min(a, b);
    for (int i = m; i > 0; i--)
    {
        if(a %i ==0 && b%i == 0)
        {
            return i;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}
