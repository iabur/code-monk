#include<bits/stdc++.h>
using namespace std;

bool check(int n, int i)
{
    return (n & (1 << i));
}
int main()
{
    int n, i;
    cin >> n >> i;
    check(n,i)? cout << "Yes": cout << "No";
}
