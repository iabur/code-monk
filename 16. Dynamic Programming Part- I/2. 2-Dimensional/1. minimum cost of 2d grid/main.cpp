#include<bits/stdc++.h>
using namespace std;

#define f(i, a, b) for(int i = (int)(a); i < (int)(b); i++)

int main()
{
    int a, b;
    a = b = 4;
    int cost[a][b];
    f(i, 0, a)
    {
        f(j, 0, b)
        {
            cin >> cost[i][j];
        }
    }
    int mincost[a][b];
    mincost[0][0] = cost[0][0];
    f(i, 1, a)
    {
        mincost[i][0] = mincost[i-1][0] + cost[i][0];
    }
    f(j, 1, b)
    {
        mincost[0][j] = mincost[0][j-1] + cost[0][j];
    }
    f(i, 1, a)
    {
        f(j, 1, b)
        {
            mincost[i][j] = min(mincost[i-1][j], mincost[i][j-1]) + cost[i][j];
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
