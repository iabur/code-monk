#include<bits/stdc++.h>
using namespace std;
int N;
int p[100];
int cache[100][100];
int profit(int be, int en)
{
    if(be > en)
        return 0;
    if(cache[be][en] != -1)
        return cache[be][en];
    int year = N - (en - be + 1) + 1;
    return cache[be][en] = max(profit(be+1, en) + year*p[be], profit(be, en-1) + year * p[en]);
}
int main()
{
    cin >> N;
        for(int i = 1; i <= N; i++)
        {
            int wine;
            cin >> wine;
            p[i] = wine;
        }
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                cache[i][j] = -1;
            }
        }
       cout <<  profit(1, N);

}
