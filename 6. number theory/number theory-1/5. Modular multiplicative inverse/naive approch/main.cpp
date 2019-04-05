#include<bits/stdc++.h>
using namespace std;
int naivapproch(int a, int m)
{
    a = a%m;
    for (int i = 1; i < m; i++)
    {
        if((a*i)%m == 1)
        {
            return i;
        }
    }
}
int main()
{
    int a, m;
    cin >> a >> m;
    cout << naivapproch(a, m);
}
