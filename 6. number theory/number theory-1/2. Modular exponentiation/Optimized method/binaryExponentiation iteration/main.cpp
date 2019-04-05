#include<bits/stdc++.h>
using namespace std;
int binaryexponentiation(int x, int n)
{
    int result = 1;
    while(n > 0)
    {
        if(n%2 == 1)
        {
            result *= x;
        }
        x = x*x;
        n /= 2;

    }
    return result;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << binaryexponentiation(x, n);
}
