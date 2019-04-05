#include<bits/stdc++.h>
using namespace std;

struct iabur{
int x;
int y;
};
iabur tem;
iabur modInverse(int a,int m)
{
    if(m == 0)
    {
        tem.x = 1;
        tem.y = 0;
    }
    else
    {
        modInverse(m, a%m);
        int t = tem.x;
        tem.x = tem.y;
        tem.y = t - (a/m)*tem.y;
    }
    return tem;
}

int main()
{
    int a, m;
    cin >> a >> m;
    iabur tem = modInverse(a, m);
   // cout << tem.x << endl << tem.y << endl;
    cout << (tem.x%m+m)%m;

}
