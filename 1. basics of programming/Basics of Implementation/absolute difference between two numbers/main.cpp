#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int tem;
    tem = n - m;
    if(tem < 0)
    {
        tem *= -1;
    }
    cout << tem;
    return 0;
}
