#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}
