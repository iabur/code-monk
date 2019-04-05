#include<bits/stdc++.h>
using namespace std;
int binaryexponentiation(int x, int n)
{
    if(n == 0)
        return 1;
    else if(n%2 == 0)
    {
        return binaryexponentiation(x*x, n/2);
    }
    else
        return x*binaryexponentiation(x*x, (n-1)/2);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << binaryexponentiation(x, n);
}
