#include<bits/stdc++.h>
using namespace std;
vector<int>f;
void factorize(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            f.push_back(i);
            n /= i;
        }
    }
    if(n != 1)
    {
        f.push_back(n);
    }
}

int main()
{
    int n;
    cin >> n;
    factorize(n);
    for(int i = 0; i < f.size(); i++)
    {
        cout << f[i] << " ";
    }
    return 0;
}
