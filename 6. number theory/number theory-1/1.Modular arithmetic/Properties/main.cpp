#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans1 = (a%c + b%c)%c;
    int ans2 = (a%c - b%c +c)%c;
    int ans3 = (a%c * b%c)%c;
    //int ans4 = (a%c / b%c)%c;
    cout << ans1 << endl << ans2 << endl << ans3 << endl << ans4 << endl;
    return 0;
}
