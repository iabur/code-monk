#include<bits/stdc++.h>
using namespace std;
int iterativepower(int x, int n)
{
    int result = 1;
    while(n > 0)
    {
        result *= x;
        n--;
    }
    return result;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << iterativepower(x, n);
}
