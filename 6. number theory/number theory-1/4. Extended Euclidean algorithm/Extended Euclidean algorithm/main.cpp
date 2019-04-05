#include<bits/stdc++.h>
using namespace std;
struct gcd{
int x;
int y;
int d;
};
gcd iabur;
gcd extended(int a, int b)
{

    if(b == 0)
    {
        iabur.d = a;
        iabur.x = 1;
        iabur.y = 0;
    }
    else
    {   extended(b, a%b);
        int tem = iabur.x;
        iabur.x = iabur.y;
        iabur.y = tem - (a/b)*iabur.y;

    }
    return iabur;

}

int main()
{
    int a, b;
    cin >> a >> b;
    gcd tem = extended(a, b);
    cout << tem.d << endl << tem.x << endl << tem.y;
}
