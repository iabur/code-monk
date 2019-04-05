#include<bits/stdc++.h>
using namespace std;

#define f(i, a, b) for(int i = (int)(a); i < (int)(b); i++)

int main()
{
    int a, b;
    a = b = 4;

    int mincost[a][b];
    mincost[0][0] = 1;

    f(i, 1, a)
    {
        mincost[i][0] = 1;
    }
    f(j, 1, b)
    {
        mincost[0][j] = 1;
    }
    f(i, 1, a)
    {
        f(j, 1, b)
        {
            mincost[i][j] = mincost[i-1][j] + mincost[i][j-1];
        }
    }
    f(i, 0, a)
    {
        f(j, 0, b)
        {
            cout << mincost[i][j] << " ";
        }
        cout << endl;
    }

}
