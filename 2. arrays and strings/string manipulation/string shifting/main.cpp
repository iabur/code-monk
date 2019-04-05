#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Input string" << endl;
    string a;
    char b[100];
    cin >> a;
    cout << "shifting number" << endl;
    int n;
    cin >> n;

    for (int i = 0; i < a.size(); i++)
    {
        int p = (i+n) % a.size();
        b[p] = a[i];
    }
    b[a.size()] = '\0';

    cout << b;


}
