#include<bits/stdc++.h>
using namespace std;

int recursivepower(int x, int n)
{
    if(n == 0)
        return 1;
   return x * recursivepower(x, n-1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout <<  recursivepower(x, n);
}
